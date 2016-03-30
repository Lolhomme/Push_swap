/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 17:15:11 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/30 17:15:13 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int				found_min(t_dlst **adlst, t_dlst **zdlst, int a_size)
{
	int			i;
	int			k;
	int			min;
	t_dlst		*current;

	current = *adlst;
	if (a_size == 1)
		return (1);
	i = 2;
	k = 1;
	min = current->n;
	current = current->next;
	while (current != *zdlst)
	{
		if (current->n < min)
		{
			min = current->n;
			k = i;
		}
		current = current->next;
		i++;
	}
	if (current->n < min)
		k = i;
	return (k);
}

int				a_isok(t_dlst **adlst, t_dlst **zdlst, int a_size)
{
	t_dlst		*current;

	if (a_size == 1)
		return (1);
	current = *adlst;
	while (current != *zdlst)
	{
		if (current->n > current->next->n)
			return (0);
		current = current->next;
	}
	return (1);
}

void			ps_tri(t_ps *ps)
{
	int			k;

	while (ps->a_size && !a_isok(ps->a_adlst, ps->a_zdlst, ps->a_size))
	{
		k = found_min(ps->a_adlst, ps->a_zdlst, ps->a_size);
		if ((ps->a_size / 2) + 1 < k)
		{
			k = ps->a_size - k + 1;
			while (k-- && ps->a_size != 1)
				ps_rotra(ps, '1');
		}
		else
		{
			while (k-- > 1)
				ps_rota(ps, '1');
		}
		if (!a_isok(ps->a_adlst, ps->a_zdlst, ps->a_size))
			ps_passa(ps);
	}
	while (!ft_dlstisempty(ps->b_adlst))
	{
		ps_passb(ps);
		if (!ft_dlstisempty(ps->b_adlst))
			ft_putchar(' ');
	}
}
