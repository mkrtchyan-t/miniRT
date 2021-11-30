/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:24:54 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:24:56 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# include "math.h"

typedef struct	s_color
{
	int red;
	int green;
	int blue;
}				t_color;

typedef union	u_int_color
{
	int				integer;
	unsigned char	comps[4];
}				t_int_color;

t_color			int_to_color(int color);
int				color_to_int(t_color color);

#endif
