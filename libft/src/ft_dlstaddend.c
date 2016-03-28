/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstaddend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 13:47:28 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/26 14:14:44 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_dlstaddend(t_dlst *new, t_dlst **adlst, t_dlst **zdlst)
{
	t_dlst		*current;

	current = *zdlst;
	if (!current->prev)
		*adlst = current;
	else if (!current->prev->prev)
		*adlst = current;
	*zdlst = new;
	new->prev = current;
	current->next = new;
}
