/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   discriminant.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:27:38 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:27:40 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISCRIMINANT_H
# define DISCRIMINANT_H
# include <math.h>

typedef struct	s_qparams
{
	double	a;
	double	b;
	double	c;
}				t_qparams;
void			swap_doubles(double *a, double *b);
t_qparams		new_qparams(double a, double b, double c);
int				solve_discr(t_qparams params, double *x0, double *x1);

#endif
