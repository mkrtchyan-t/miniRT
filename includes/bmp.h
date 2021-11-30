/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:24:31 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:24:33 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BMP_H
# define BMP_H

# define PIXEL_DATA_OFFSET 54
# define HEADER_SIZE 40
# define PLANES 1
# define BITS_PER_PIXEL 24

typedef struct	s_pixel{
	unsigned char b;
	unsigned char g;
	unsigned char r;
}				t_pixel;

int				write_bmp(char *filename, unsigned int width,
							unsigned int height, t_pixel **pixels);

#endif
