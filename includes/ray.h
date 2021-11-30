/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:48 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:49 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H
# define RAY_H
# include "vector.h"
# include "list.h"
# include "scene.h"

typedef struct	s_ray
{
	t_vec origin;
	t_vec direction;
}				t_ray;

t_ray			create_ray(t_vec origin, t_vec direction);
t_ray			ray_to_pixel(int x, int y, t_scene *sene);

#endif
