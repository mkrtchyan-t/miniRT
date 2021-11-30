/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:29:34 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:29:36 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vec
{
	double x;
	double y;
	double z;
}				t_vec;
t_vec			create_v3(double x, double y, double z);
double			vector_len(t_vec vector);
double			dot_product(t_vec a, t_vec b);
t_vec			substract(t_vec vec1, t_vec vec2);
void			normalize_vector(t_vec *vector);
t_vec			v3_add(t_vec vec1, t_vec vec2);
t_vec			v3_multiply(t_vec vec1, double x);
t_vec			cross_product(t_vec a, t_vec b);

#endif
