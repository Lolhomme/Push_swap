/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 12:01:42 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/26 12:14:45 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_dlst			*ft_dlstdup(const t_dlst *src)
{
	t_dlst		*dup;

	dup = NULL;
	if (!src)
		return (dup);
	dup = (t_dlst *)malloc(sizeof(t_dlst));
	if (dup)
	{
		dup->n = src->n;
		dup->next = src->next;
		dup->prev = src->prev;
	}
	return (dup);
}
