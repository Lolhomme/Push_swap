/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 11:55:40 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 17:52:42 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void			ps_rota(t_ps *ps, char add)
{
	t_dlst		*current;
	int			tmp;

	if (add == '1')
		ft_putstr("ra ");
	current = *(ps->a_adlst);
	if (!current->next)
		return ;
	else if (!current->next->next)
		return ;
	tmp = current->n;
	while (current != *(ps->a_zdlst))
	{
		current->n = current->next->n;
		current = current->next;
	}
	current->n = tmp;
}

void			ps_rotb(t_ps *ps, char add)
{
	t_dlst		*current;
	int			tmp;

	if (add == '1')
		ft_putstr("rb ");
	current = *(ps->b_adlst);
	if (!current->next)
		return ;
	else if (!current->next->next)
		return ;
	tmp = current->n;
	while (current != *(ps->b_zdlst))
	{
		current->n = current->next->n;
		current = current->next;
	}
	current->n = tmp;
}

void			ps_rotr(t_ps *ps)
{
	ft_putstr("rr ");
	ps_rota(ps, '0');
	ps_rotb(ps, '0');
}
