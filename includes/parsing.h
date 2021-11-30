/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:28:34 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:28:35 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include <fcntl.h>
# include <string.h>
# include <sys/errno.h>
# include "get_next_line.h"
# include "minirt.h"
# include "ft_atoi.h"

t_scene	*parse_file(char *path);
void	check_scene(t_scene *scene);
void	init_scene(t_scene *scene);
void	parse_line(t_scene *scene, char **splitted);
void	parse_coordinates(t_vec *point, char *line, int *i, int *move);
void	parse_color(t_object *object, char *line, int *i, int *move);
int		open_file(char *path);
void	handle_error(char *errormsg);
void	parse_sphere(t_scene *scene, char **splitted);
void	parse_square(t_scene *scene, char **splitted);
void	parse_triangle(t_scene *scene, char **splitted);
void	parse_cylinder(t_scene *scene, char **splitted);
void	parse_plane(t_scene *scene, char **splitted);
void	parse_resolution(t_scene *scene, char **splitted);
void	parse_ambient(t_scene *scene, char **splitted);
void	parse_camera(t_scene *scene, char **splitted);
void	parse_light(t_scene *scene, char **splitted);
char	**ft_split(char const *s, char c);
int		line_fields(char **splitted);
int		check_color2(t_color2 c);
void	parse_color2(t_color2 *result, char *field, char *errmsg);
void	parse_coords(t_vec *point, char *field, char *errmsg);
int		check_normal(t_vec n);
void	check_scene(t_scene *scene);
int		allowed_symbol(char c);
int		check_line(char *line);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
