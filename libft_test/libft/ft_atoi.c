/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 14:48:02 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/19 12:30:43 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	result;
	long				som;

	som = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		som = som * -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (result * 10 + *str - 48 > 9223372036854775807U && som == 1)
			return (-1);
		if (result * 10 + *str - 48 > 9223372036854775808U)
			return (0);
		result = result * 10 + *str - 48;
		str++;
	}
	return ((int)result * som);
}
