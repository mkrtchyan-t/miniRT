/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:32:49 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:32:50 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parsing.h"

int		check_color2(t_color2 c)
{
	if (c.red < 0 || c.red > 1 || c.green < 0 || c.green > 1 || c.blue < 0 ||
	c.blue > 1)
		return (0);
	return (1);
}

void	parse_color2(t_color2 *result, char *field, char *errmsg)
{
	char **color;

	color = ft_split(field, ',');
	if (line_fields(color) != 3)
		handle_error(errmsg);
	result->red = (double)ft_atoi(color[0]) / 256;
	result->green = (double)ft_atoi(color[1]) / 256;
	result->blue = (double)ft_atoi(color[2]) / 256;
}

void	parse_coords(t_vec *point, char *field, char *errmsg)
{
	char **coords;

	coords = ft_split(field, ',');
	if (line_fields(coords) != 3)
		handle_error(errmsg);
	point->x = ft_atod(coords[0]);
	point->y = ft_atod(coords[1]);
	point->z = ft_atod(coords[2]);
}

int		check_normal(t_vec n)
{
	if (n.x < -1 || n.x > 1 || n.y < -1 || n.y > 1 || n.z < -1 || n.z > 1)
		return (0);
	return (1);
}
