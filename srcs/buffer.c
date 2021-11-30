/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:32:33 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:32:34 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/buffer.h"

t_pixel	**create_buffer(int height, int width)
{
	t_pixel	**result;
	int		i;

	i = 0;
	result = malloc(sizeof(t_pixel *) * height);
	while (i < height)
	{
		result[i] = malloc(sizeof(t_pixel) * width);
		i++;
	}
	return (result);
}

void	free_buffer(t_pixel **buffer, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
}

t_pixel	pix_from_int(int color)
{
	t_color	tc;
	t_pixel	result;

	tc = int_to_color(color);
	result.b = tc.blue;
	result.g = tc.green;
	result.r = tc.red;
	return (result);
}
