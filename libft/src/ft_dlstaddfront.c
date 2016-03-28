/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstaddfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 11:51:21 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/26 14:53:59 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_dlstaddfront(t_dlst *new, t_dlst **adlst, t_dlst **zdlst)
{
	t_dlst		*current;

	current = *adlst;
	if (!current->next)
		*zdlst = current;
	else if (!current->next->next)
		*zdlst = current;
	*adlst = new;
	new->next = current;
	current->prev = new;
}
