/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstrprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 12:39:15 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/26 15:23:43 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_dlstrprint(t_dlst **adlst, t_dlst **zdlst)
{
	t_dlst		*current;

	current = *zdlst;
	if (!current->prev)
		return ;
	while (current != *adlst)
	{
		ft_putnbrendl(current->n);
		current = current->prev;
	}
	ft_putnbrendl(current->n);
}
