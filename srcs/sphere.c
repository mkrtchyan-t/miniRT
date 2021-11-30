/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:36:31 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:36:33 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sphere.h"

t_sphere	*new_sphere(t_vec center, double radius)
{
	t_sphere *sphere;

	sphere = malloc(sizeof(t_sphere));
	sphere->center = center;
	sphere->radius = radius;
	return (sphere);
}

t_vec		get_sphere_normal(t_vec point, t_sphere sphere)
{
	t_vec n;

	n = substract(point, sphere.center);
	normalize_vector(&n);
	return (n);
}

int			get_roots(double *t0, double *t1, t_ray ray, t_sphere sphere)
{
	t_vec	l;
	double	a;
	double	b;
	double	c;

	l = substract(ray.origin, sphere.center);
	a = dot_product(ray.direction, ray.direction);
	b = 2.0 * dot_product(ray.direction, l);
	c = dot_product(l, l) - (sphere.radius * sphere.radius);
	if (solve_discr(new_qparams(a, b, c), t0, t1) == 0)
		return (0);
	return (1);
}

int			intersect_sphere(t_ray ray, t_sphere sphere, double *t)
{
	double t0;
	double t1;

	if (get_roots(&t0, &t1, ray, sphere) == 0)
		return (0);
	if (t0 < 0)
	{
		t0 = t1;
		if (t0 < 0)
			return (0);
	}
	*t = t0;
	return (1);
}
