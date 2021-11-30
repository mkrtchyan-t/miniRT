/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:35:56 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:35:59 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/plane.h"

t_plane	*new_plane(t_vec p0, t_vec normal)
{
	t_plane *plane;

	plane = malloc(sizeof(t_plane));
	plane->p0 = p0;
	plane->normal = normal;
	return (plane);
}

t_vec	get_plane_normal(t_plane plane)
{
	t_vec ret;

	ret = plane.normal;
	return (ret);
}

int		intersect_plane(t_ray ray, t_plane plane, double *t)
{
	double	denom;
	t_vec	p0l0;

	denom = dot_product(plane.normal, ray.direction);
	if (fabs(denom) > 1e-6)
	{
		p0l0 = substract(plane.p0, ray.origin);
		*t = dot_product(p0l0, plane.normal) / denom;
		return (*t >= 0);
	}
	return (0);
}
