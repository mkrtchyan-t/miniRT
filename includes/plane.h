/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:40 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:42 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLANE_H
# define PLANE_H

# include "vector.h"
# include "ray.h"

typedef struct	s_plane
{
	t_vec p0;
	t_vec normal;
}				t_plane;

t_plane			*new_plane(t_vec p0, t_vec normal);
t_vec			get_plane_normal(t_plane plane);
int				intersect_plane(t_ray ray, t_plane plane, double *t);

#endif
