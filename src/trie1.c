/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 17:04:10 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/31 17:04:12 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		need_sa(t_stacks *st)
{
	if (st->nb_sa > 1)
	{
		return (*(int *)st->sa->content > *(int *)st->sa->next->content);
	}
	return (0);
}

void	trie(t_stacks *st)
{
	int id;

	if (is_presk_sort(st))
		do_all(st);
	else
	{
		while (st->nb_sa > 1)
		{
			while (*(int *)st->sa->content != sa_min(st, &id) && !is_sort(st))
			{
				if (need_sa(st))
					do_sa(st);
				else if (id >= (st->nb_sa / 2))
					do_rra(st);
				else
					do_ra(st);
			}
			if (is_sort(st))
				break ;
			do_pb(st);
		}
		while (st->nb_sb)
			do_pa(st);
	}
	ft_putchar('\n');
}

int		*lst2tab(t_list **lst, int *size)
{
	t_list	*tmp;
	int		*tab;

	*size = 0;
	tmp = *lst;
	while (tmp)
	{
		(*size)++;
		tmp = tmp->next;
	}
	tmp = *lst;
	tab = (int *)malloc(sizeof(int) * (*size));
	*size = 0;
	while (tmp)
	{
		tab[(*size)++] = *(int *)tmp->content;
		tmp = tmp->next;
	}
	return (tab);
}
