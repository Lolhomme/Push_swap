/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 10:59:58 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 13:58:09 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_dlstprint(t_dlst **adlst, t_dlst **zdlst)
{
	t_dlst		*current;

	current = *adlst;
	if (!current->next)
		return ;
	while (current != *zdlst)
	{
		ft_putnbrendl(current->n);
		current = current->next;
	}
	ft_putnbrendl(current->n);
}
