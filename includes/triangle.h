/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:29:28 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:29:29 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_H
# define TRIANGLE_H
# include "vector.h"
# include "ray.h"

typedef struct	s_triangle
{
	t_vec a;
	t_vec b;
	t_vec c;

}				t_triangle;

t_triangle		*new_triangle(t_vec a, t_vec b, t_vec c);
t_vec			get_triangle_normal(t_triangle triangle);
int				check_edges(t_triangle triangle, t_vec p, t_vec n);
int				intersect_triangle(t_ray ray, t_triangle triangle, double *t);

#endif
