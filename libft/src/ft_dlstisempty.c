/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstisempty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 12:38:26 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 12:40:42 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_dlstisempty(t_dlst **adlst)
{
	t_dlst	*first;

	first = *(adlst);
	if (!first->next)
		return (1);
	return (0);
}
