/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 13:44:15 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/29 13:44:17 by alaulom          ###   ########.fr       */
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
