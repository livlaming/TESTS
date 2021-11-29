/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 09:01:25 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/26 17:16:47 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*space;

	len = ft_strlen(str);
	space = (char *)malloc(sizeof(char) * len + 1);
	if (!space)
		return (NULL);
	space[len] = '\0';
	len = 0;
	while (str[len] != '\0')
	{
		space[len] = str[len];
		len++;
	}
	return (space);
}
