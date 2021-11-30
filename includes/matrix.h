/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:18 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:20 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H
# include "vector.h"

typedef struct	s_matrix
{
	double d[4][4];
}				t_matrix;

t_vec			multiply_by_matrix(t_vec p, t_matrix m);
t_matrix		look_at(t_vec origin, t_vec cam_vector);

#endif
