/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_scene.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:32:41 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:32:43 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parsing.h"

void	check_scene(t_scene *scene)
{
	if (scene->cameras == NULL)
		handle_error("You need to have at least one camera in a scene.");
	if (scene->ambient_color.red < 0 || scene->ambient_color.green < 0
	|| scene->ambient_color.blue < 0)
		handle_error("You need to specify a valid ambient light ([0-255]).");
	if (scene->width <= 0 || scene->height <= 0)
		handle_error("You have to specify positive width and height.");
	if (scene->width > 2560)
		scene->width = 2560;
	if (scene->height > 1440)
		scene->height = 1440;
}

int		allowed_symbol(char c)
{
	if (c == '\t' | c == ' ' | c == '\n' | c == '.' || c == ',' ||
	(c >= '0' && c <= '9') || c == '-')
		return (1);
	return (0);
}

int		check_line(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (!allowed_symbol(line[i]) && i > 2)
			return (0);
		i++;
	}
	return (1);
}
