/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:54 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:56 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

# include "vector.h"
# include "list.h"
# include "color.h"
# include "color2.h"

typedef struct	s_camera
{
	t_vec	origin;
	t_vec	direction;
	int		fov;
}				t_camera;

typedef struct	s_scene
{
	t_list		*objects;
	t_list		*lights;
	int			width;
	int			height;
	double		ambient_intensity;
	t_color2	ambient_color;
	t_list		*cameras;
	int			selected_camera;
}				t_scene;

typedef enum	e_object_type
{
	SPHERE,
	CUBE,
	PLANE,
	LIGHT,
	TRIANGLE,
	SQUARE,
	CYLINDER,
}				t_otype;

typedef struct	s_object
{
	t_otype		type;
	void		*ptr;
	t_color2	color;
	double		albedo;

}				t_object;

typedef struct	s_light
{
	t_vec		p0;
	double		intensity;
	t_color2	color;
}				t_light;

#endif
