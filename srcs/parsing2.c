/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:35:22 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:35:24 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parsing.h"

void	handle_error(char *errormsg)
{
	write(2, "Error\n", 6);
	write(2, errormsg, ft_strlen(errormsg));
	write(2, "\n", 1);
	exit(-1);
}

int		open_file(char *path)
{
	int			fd;
	extern int	errno;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		handle_error(strerror(errno));
	return (fd);
}

int		line_fields(char **splitted)
{
	int i;

	i = 0;
	while (splitted[i])
		i++;
	return (i);
}
