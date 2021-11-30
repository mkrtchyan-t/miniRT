/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:33:13 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:33:14 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/color2.h"

t_color2	int_color(int color)
{
	t_color		this;
	t_color2	result;

	this = int_to_color(color);
	result.red = (float)this.red / 256;
	result.green = (float)this.green / 256;
	result.blue = (float)this.blue / 256;
	return (result);
}

t_color2	from_color(t_color a)
{
	t_color2	result;

	result.red = a.red / 256;
	result.green = a.green / 256;
	result.blue = a.blue / 256;
	return (result);
}

t_color2	from_rgb(int r, int g, int b)
{
	t_color2	result;

	result.red = (float)r / 256;
	result.green = (float)g / 256;
	result.blue = (float)b / 256;
	return (result);
}
