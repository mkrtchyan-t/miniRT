/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specular.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:36:18 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:44:33 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shading.h"

double		spec_coeff(t_light light, t_inter inter)
{
	t_vec		light_ray;
	t_vec		reflectance_vector;
	t_vec		back_view_ray;
	double		result;

	light_ray = substract(light.p0, inter.hit_point);
	normalize_vector(&light_ray);
	reflectance_vector = v3_add(light_ray, v3_multiply(v3_multiply(
		inter.hit_normal, dot_product(light_ray, inter.hit_normal)), -2));
	back_view_ray = substract(inter.hit_point, inter.sent.origin);
	normalize_vector(&back_view_ray);
	result = fmax(dot_product(reflectance_vector, back_view_ray), 0);
	result = pow(result, 10);
	return (result);
}

t_color2	specular(t_light light, t_inter inter)
{
	t_color2	specular;
	t_color2	highlight;
	double		coeff;

	highlight.red = 1;
	highlight.green = 1;
	highlight.blue = 1;
	highlight = color2_coeff(highlight, 1);
	specular = color2_add(
			color2_coeff(inter.closest_object->color, 2), highlight);
	coeff = spec_coeff(light, inter);
	return (color2_coeff(specular, coeff));
}
