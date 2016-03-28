/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 11:54:48 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 17:47:32 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_ps		*init_ps(t_ps *ps)
{
	ps = (t_ps *)malloc(sizeof(t_ps));
	ps->a_adlst = (t_dlst **)malloc(sizeof(t_dlst *));
	*(ps->a_adlst) = (t_dlst *)malloc(sizeof(t_dlst));
	ps->a_zdlst = (t_dlst **)malloc(sizeof(t_dlst *));
	*(ps->a_zdlst) = (t_dlst *)malloc(sizeof(t_dlst));
	ps->a_size = 0;
	ps->b_adlst = (t_dlst **)malloc(sizeof(t_dlst *));
	*(ps->b_adlst) = (t_dlst *)malloc(sizeof(t_dlst));
	ps->b_zdlst = (t_dlst **)malloc(sizeof(t_dlst *));
	*(ps->b_zdlst) = (t_dlst *)malloc(sizeof(t_dlst));
	return (ps);
}

void		free_ps(t_ps *ps)
{
	ft_dlstdel(ps->a_adlst);
	ft_dlstdel(ps->b_adlst);
	free(ps->b_zdlst);
	free(ps->b_adlst);
	free(ps->a_zdlst);
	free(ps->a_adlst);
	free(ps);
}