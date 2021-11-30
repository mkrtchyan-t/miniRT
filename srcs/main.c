/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:34:46 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:34:48 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (42);
	else
	{
		if (argc == 2)
			minirt(argv[1], 0);
		else if (ft_strncmp(argv[2], "--save", ft_strlen(argv[2])) == 0)
			minirt(argv[1], 1);
	}
	return (0);
}
