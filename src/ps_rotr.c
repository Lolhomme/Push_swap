/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 17:14:46 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/30 17:14:52 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void			ps_rotra(t_ps *ps, char add)
{
	t_dlst		*current;
	int			tmp;

	if (add == '1')
		ft_putstr("rra ");
	current = *(ps->a_adlst);
	if (!current->next)
		return ;
	else if (!current->next->next)
		return ;
	current = *(ps->a_zdlst);
	tmp = current->n;
	while (current != *(ps->a_adlst))
	{
		current->n = current->prev->n;
		current = current->prev;
	}
	current->n = tmp;
}

void			ps_rotrb(t_ps *ps, char add)
{
	t_dlst		*current;
	int			tmp;

	if (add == '1')
		ft_putstr("rrb ");
	current = *(ps->b_adlst);
	if (!current->next)
		return ;
	else if (!current->next->next)
		return ;
	current = *(ps->b_zdlst);
	tmp = current->n;
	while (current != *(ps->b_adlst))
	{
		current->n = current->prev->n;
		current = current->prev;
	}
	current->n = tmp;
}

void			ps_rotrr(t_ps *ps)
{
	ft_putstr("rrr ");
	ps_rotra(ps, '0');
	ps_rotrb(ps, '0');
}
