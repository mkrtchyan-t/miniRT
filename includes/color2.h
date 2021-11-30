/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:27:22 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:27:24 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR2_H
# define COLOR2_H

# include "color.h"

typedef struct	s_color2
{
	float red;
	float green;
	float blue;
}				t_color2;

t_color2		int_color(int color);
t_color2		from_color(t_color a);
t_color2		color2_add(t_color2 a, t_color2 b);
t_color2		color2_mult(t_color2 a, t_color2 b);
t_color2		color2_coeff(t_color2 a, double coeff);
t_color2		from_rgb(int r, int g, int b);
t_color2		from_rgb(int r, int g, int b);
int				to_int(t_color2 a);

#endif
