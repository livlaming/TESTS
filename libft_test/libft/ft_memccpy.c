/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 12:05:27 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/19 11:25:13 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)src)[i] != (unsigned char)c)
		{
			((((unsigned char*)dst)[i] = ((unsigned char*)src)[i]));
			i++;
		}
		else
		{
			((unsigned char *)dst)[i] = ((unsigned char*)src)[i];
			return (&((unsigned char*)dst)[i + 1]);
		}
	}
	((unsigned char *)dst)[i] = ((unsigned char*)src)[i];
	return (NULL);
}
