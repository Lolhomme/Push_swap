/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 16:57:46 by alaulom           #+#    #+#             */
/*   Updated: 2016/03/28 16:57:48 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int			main(int ac, char **av)
{
	t_ps	*ps;

	ps = 0;
	ac--;
	av++;
	if (ac < 2)
		exit(0);
	ps = init_ps(ps);
	fill_start(ps, ac, av);
	ps_tri(ps);
	free_ps(ps);
	ft_putchar('\n');
	return (0);
}
