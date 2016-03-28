/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:03:19 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/16 14:58:08 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t			ft_strlen(const char *str)
{
	size_t		index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
			index++;
	}
	return (index);
}
