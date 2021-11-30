/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:36:06 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:36:07 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ray.h"
#include "../includes/minirt.h"
#include "../includes/matrix.h"

t_ray		create_ray(t_vec origin, t_vec direction)
{
	t_ray result;

	result.origin = origin;
	result.direction = direction;
	return (result);
}

t_camera	pick_camera(t_scene *scene)
{
	t_list	*runner;
	int		i;

	i = 0;
	runner = scene->cameras;
	while (i < scene->selected_camera && runner != NULL)
	{
		i++;
		runner = runner->next;
	}
	return (*(t_camera *)runner->content);
}

t_vec		get_direction(int x, int y, t_scene *scene, t_camera camera)
{
	double fov_coeff;
	double aspect_ratio;
	double p_x;
	double p_y;

	fov_coeff = tan((double)camera.fov / 2 * M_PI / 180);
	aspect_ratio = (double)scene->width / (double)scene->height;
	p_x = (2 * (x + 0.5) / (double)scene->width - 1) * aspect_ratio * fov_coeff;
	p_y = (1 - 2 * (y + 0.5) / (double)scene->height) * fov_coeff;
	return (create_v3(p_x, p_y, 1));
}

t_ray		ray_to_pixel(int x, int y, t_scene *scene)
{
	t_vec		origin;
	t_vec		direction;
	t_matrix	matrix;
	t_camera	camera;

	camera = pick_camera(scene);
	matrix = look_at(camera.origin, camera.direction);
	origin = multiply_by_matrix(create_v3(0, 0, 0), matrix);
	direction = get_direction(x, y, scene, camera);
	direction = multiply_by_matrix(direction, matrix);
	direction = substract(direction, origin);
	normalize_vector(&direction);
	return (create_ray(origin, direction));
}
