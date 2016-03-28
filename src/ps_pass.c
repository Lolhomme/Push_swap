/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pass.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 16:57:57 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/28 16:57:59 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void			ps_passa(t_ps *ps)
{
	t_dlst		*src;

	ft_putstr("pb ");
	src = *(ps->a_adlst);
	if (!src->next)
		return ;
	*(ps->a_adlst) = src->next;
	if (src->next)
		src->next->prev = NULL;
	ft_dlstaddfront(src, ps->b_adlst, ps->b_zdlst);
	ps->a_size--;
}

void			ps_passb(t_ps *ps)
{
	t_dlst		*src;

	ft_putstr("pa");
	src = *(ps->b_adlst);
	if (!src->next)
		return ;
	*(ps->b_adlst) = src->next;
	if (src->next)
		src->next->prev = NULL;
	ft_dlstaddfront(src, ps->a_adlst, ps->a_zdlst);
}
