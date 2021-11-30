/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:36:39 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:36:40 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/square.h"
#include <math.h>

t_square	*new_square(t_vec center, t_vec normal, double length)
{
	t_square *square;

	square = malloc(sizeof(t_square));
	square->center = center;
	square->normal = normal;
	square->length = length;
	return (square);
}

t_vec		get_square_normal(t_square square)
{
	t_vec ret;

	ret = square.normal;
	return (ret);
}

int			intersect_square(t_ray ray, t_square square, double *t)
{
	double	denom;
	t_vec	hit_point;
	t_vec	p0l0;

	denom = dot_product(square.normal, ray.direction);
	if (fabs(denom) > 1e-6)
	{
		p0l0 = substract(square.center, ray.origin);
		*t = dot_product(p0l0, square.normal) / denom;
		hit_point = v3_add(ray.origin, v3_multiply(ray.direction, *t));
		if (*t >= 0)
		{
			if (fabs(hit_point.x - square.center.x) > (square.length / 2))
				return (0);
			if (fabs(hit_point.y - square.center.y) > (square.length / 2))
				return (0);
			if (fabs(hit_point.z - square.center.z) > (square.length / 2))
				return (0);
			else
				return (1);
		}
		else
			return (0);
	}
	return (0);
}
