/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 11:46:13 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/26 11:51:02 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_dlstdel(t_dlst **adlst)
{
	t_dlst		*current;

	current = *adlst;
	while (current->next)
	{
		ft_dlstdelone(&current);
		current = current->next;
	}
	ft_dlstdelone(&current);
}
