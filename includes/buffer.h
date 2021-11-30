/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:24:44 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:24:46 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H
# define BUFFER_H
# include "bmp.h"
# include "color.h"
# include "stdlib.h"

t_pixel	**create_buffer(int height, int width);
void	free_buffer(t_pixel **buffer, int height);
t_pixel	pix_from_int(int color);

#endif
