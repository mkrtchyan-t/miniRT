/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:33:36 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:33:37 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_atoi.h"

int		ft_atoi(const char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while ((*str) == '\t' || (*str) == '\n' || (*str) == '\v' || (*str) == '\f'
			|| (*str) == '\r' || (*str) == ' ')
		str++;
	if ((*str) == '-' || (*str) == '+')
	{
		sign *= ((*str) == '-' ? -1 : 1);
		str++;
	}
	while ((*str) != '\0' && (*str) >= '0' && (*str) <= '9')
	{
		nbr *= 10;
		nbr += (*str) - '0';
		str++;
	}
	return (nbr * sign);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (u1[i] != '\0' && u2[i] != '\0' && i < n && u1[i] == u2[i])
		i++;
	if (i == n)
		return (u1[i - 1] - u2[i - 1]);
	return (u1[i] - u2[i]);
}

double	ten_to(int pow)
{
	int		i;
	double	result;

	result = 1;
	i = 0;
	while (i < pow)
	{
		result /= 10;
		i++;
	}
	return (result);
}

double	dot_part(char *str, int *len)
{
	int		i;
	double	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= ten_to(i);
	*len += i;
	return (result);
}

double	ft_atod(char *str)
{
	double		nbr;
	double		sign;
	int			i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign *= (str[i++] == '-' ? -1 : 1);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (str[i] == '.')
	{
		i++;
		nbr += dot_part(&str[i], &i);
	}
	return (nbr * sign);
}
