/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 11:25:36 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/26 11:40:48 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_dlst			*ft_dlstnew(int n)
{
	t_dlst		*new;

	new = (t_dlst *)malloc(sizeof(t_dlst));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
