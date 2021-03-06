/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 17:00:00 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/31 17:00:01 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_stacks *stacks)
{
	t_list		*tmp;

	if (stacks->nb_sa > 1)
	{
		tmp = stacks->sa;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = stacks->sa;
		stacks->sa = tmp->next;
		tmp->next = 0;
	}
	print_move(stacks, "RRA", "\033[33m");
	stacks->nb_act++;
}

void	do_rrb(t_stacks *stacks)
{
	t_list		*tmp;

	if (stacks->nb_sb > 1)
	{
		tmp = stacks->sb;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = stacks->sb;
		stacks->sb = tmp->next;
		tmp->next = 0;
	}
	print_move(stacks, "RRB", "\033[33m");
	stacks->nb_act++;
}

void	do_rrr(t_stacks *stacks)
{
	do_rra(stacks);
	do_rrb(stacks);
	stacks->nb_act--;
}
