/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:29:20 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:29:22 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
# define SQUARE_H
# include "vector.h"
# include "ray.h"

typedef struct	s_square
{
	t_vec	center;
	t_vec	normal;
	double	length;
}				t_square;

t_square		*new_square(t_vec center, t_vec normal, double length);
t_vec			get_square_normal(t_square square);
int				intersect_square(t_ray ray, t_square square, double *t);

#endif
