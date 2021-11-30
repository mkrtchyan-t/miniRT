/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:26 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:29 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include "mlx.h"
# include <math.h>
# include "vector.h"
# include "ray.h"
# include "list.h"
# include "color.h"
# include "sphere.h"
# include "triangle.h"
# include "plane.h"
# include "scene.h"
# include "square.h"
# include "cylinder.h"
# include "intersect.h"
# include "shading.h"
# include "color2.h"
# include "bmp.h"
# include "get_next_line.h"
# include "parsing.h"
# include "ft_atoi.h"
# include "buffer.h"
# include <stdlib.h>
# define IMG_HEIGHT 1000
# define IMG_WIDTH 1000
# define FOV 90

typedef	struct	s_image {
	void		*img;
	int			*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
}				t_image;

typedef struct	s_info
{
	t_scene		*scene;
	int			camera_number;
	void		*id;
	void		*window;
	t_image		image;
}				t_info;

void			minirt(char *filename, int save);

#endif
