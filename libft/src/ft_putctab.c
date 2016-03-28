/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putctab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 15:26:13 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 17:47:33 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_putctab(char **ctab, int size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		ft_putstr(ctab[i]);
		i++;
		if (i < size)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}
