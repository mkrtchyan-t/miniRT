/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:29:12 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:29:13 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHERE_H
# define SPHERE_H

# include "vector.h"
# include "ray.h"
# include "discriminant.h"

typedef struct	s_sphere
{
	t_vec	center;
	double	radius;
}				t_sphere;

t_sphere		*new_sphere(t_vec center, double radius);
t_vec			get_sphere_normal(t_vec point, t_sphere sphere);
int				intersect_sphere(t_ray ray, t_sphere sphere, double *t);
int				get_roots(double *t0, double *t1, t_ray ray, t_sphere sphere);

#endif
