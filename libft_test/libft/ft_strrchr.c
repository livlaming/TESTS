/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:00:00 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/26 14:29:23 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *mem;

	mem = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			mem = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)mem);
}
