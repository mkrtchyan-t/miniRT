/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:03 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:04 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERSECT_H
# define INTERSECT_H

int		intersect(t_ray sent, t_object *object, double *t);
int		intersect_with_all(t_list *objects, t_ray sent,
							t_object **closest_object, double *t_min);

#endif
