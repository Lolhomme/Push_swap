/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 16:59:38 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/31 16:59:41 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_pa(t_stacks *stacks)
{
	t_list	*tmp;

	if (stacks->nb_sb > 0)
	{
		tmp = stacks->sb;
		stacks->sb = stacks->sb->next;
		tmp->next = stacks->sa;
		stacks->sa = tmp;
		stacks->nb_sa++;
		stacks->nb_sb--;
	}
	print_move(stacks, "PA", "\033[36m");
	stacks->nb_act++;
}

void	do_pb(t_stacks *stacks)
{
	t_list	*tmp;

	if (stacks->nb_sa > 0)
	{
		tmp = stacks->sa;
		stacks->sa = stacks->sa->next;
		tmp->next = stacks->sb;
		stacks->sb = tmp;
		stacks->nb_sa--;
		stacks->nb_sb++;
	}
	print_move(stacks, "PB", "\033[36m");
	stacks->nb_act++;
}
