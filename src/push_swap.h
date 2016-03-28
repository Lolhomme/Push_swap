/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 10:49:43 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 17:47:18 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef struct		s_ps
{
	t_dlst			**a_adlst;
	t_dlst			**a_zdlst;
	int				a_size;
	t_dlst			**b_adlst;
	t_dlst			**b_zdlst;
}					t_ps;

/*
**	struct.c
*/

t_ps		*init_ps(t_ps *ps);
void		free_ps(t_ps *ps);

/*
**	fill_start.c
*/

void		fill_start(t_ps *ps, int ac, char **av);

/*
**	ps_swap.c
*/

void		ps_swap(t_ps *ps, char *flag, char add);

/*
**	ps_pass.c
*/

void		ps_passa(t_ps *ps);
void		ps_passb(t_ps *ps);

/*
**	ps_rot.c
*/

void		ps_rota(t_ps *ps, char add);
void		ps_rotb(t_ps *ps, char add);
void		ps_rotr(t_ps *ps);

/*
**	ps_rotr.c
*/

void		ps_rotra(t_ps *ps, char add);
void		ps_rotrb(t_ps *ps, char add);
void		ps_rotrr(t_ps *ps);

/*
**	ps_tri.c
*/

void		ps_tri(t_ps *ps);

#endif /* !PUSH_SWAP_H */
