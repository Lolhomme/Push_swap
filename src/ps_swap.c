/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 17:15:00 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/30 17:15:02 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void		ps_swap(t_ps *ps, char *flag, char add)
{
	t_dlst	*current;
	int		tmp;

	if (ft_strequ(flag, "sa"))
		current = *(ps->a_adlst);
	else if (ft_strequ(flag, "sb"))
		current = *(ps->b_adlst);
	else
	{
		current = *(ps->b_adlst);
		ps_swap(ps, "sa", '0');
	}
	if (add == '1')
		ft_putstr(flag);
	if (!current->next)
		return ;
	else if (!current->next->next)
		return ;
	tmp = current->n;
	current->n = current->next->n;
	current->next->n = tmp;
}
