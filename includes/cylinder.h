/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cylinder.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:27:32 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:27:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CYLINDER_H
# define CYLINDER_H

# include "vector.h"
# include "sphere.h"
# include "plane.h"
# include <math.h>
# include "discriminant.h"

typedef struct	s_cylinder
{
	t_vec	p;
	t_vec	normal;
	double	radius;
	double	height;
}				t_cylinder;

t_cylinder		*new_cylinder(t_vec p, t_vec normal, double radius,
														double height);
t_vec			get_cylinder_normal(t_vec point, t_cylinder cylinder);
int				intersect_cylinder(t_ray ray, t_cylinder cylinder, double *t);
void			check_t(double *t, t_cylinder cylinder, t_ray ray);
int				cyl_get_roots(double *t0, double *t1, t_cylinder cylinder,
																t_ray ray);
int				intersect_cylinder(t_ray ray, t_cylinder cylinder, double *t);

#endif
