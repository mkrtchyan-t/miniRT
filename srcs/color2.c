/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:33:06 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:33:07 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color2.h"

t_color2	color2_add(t_color2 a, t_color2 b)
{
	t_color2	result;

	result.red = fmin(a.red + b.red, 1);
	result.green = fmin(a.green + b.green, 1);
	result.blue = fmin(a.blue + b.blue, 1);
	return (result);
}

t_color2	color2_mult(t_color2 a, t_color2 b)
{
	t_color2 result;

	result.red = fmin(a.red * b.red, 1);
	result.green = fmin(a.green * b.green, 1);
	result.blue = fmin(a.blue * b.blue, 1);
	return (result);
}

t_color2	color2_coeff(t_color2 a, double coeff)
{
	t_color2 result;

	result.red = fmin(a.red * (coeff / 3.5), 1.5);
	result.green = fmin(a.green * (coeff / 3.5), 1.5);
	result.blue = fmin(a.blue * (coeff / 3.5), 1.5);
	return (result);
}

int			to_int(t_color2 a)
{
	int		result;
	t_color rgb;

	rgb.red = a.red * 256;
	rgb.green = a.green * 256;
	rgb.blue = a.blue * 256;
	result = color_to_int(rgb);
	return (result);
}
