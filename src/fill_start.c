/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 16:57:36 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/28 16:57:37 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void			fill_start(t_ps *ps, int ac, char **av)
{
	int			n;

	while (ac > 0)
	{
		n = ft_atoi(av[ac - 1]);
		ft_dlstaddfront(ft_dlstnew(n), ps->a_adlst, ps->a_zdlst);
		ps->a_size++;
		ac--;
	}
}
