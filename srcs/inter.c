/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:34:13 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:34:16 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shading.h"

t_inter		new_inter(t_vec hit_point, t_vec hit_normal,
									t_object *closest_object, t_ray sent)
{
	t_inter inter;

	inter.hit_point = hit_point;
	inter.hit_normal = hit_normal;
	inter.closest_object = closest_object;
	inter.sent = sent;
	return (inter);
}
