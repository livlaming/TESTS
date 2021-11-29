/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 09:57:07 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/26 14:26:38 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t dstlen;
	size_t i;
	size_t j;

	dstlen = ft_strlen(dst);
	j = dstlen;
	i = 0;
	if (destsize == 0 || destsize <= dstlen)
		return (destsize + ft_strlen((char *)src));
	while (j < destsize - 1 && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + ft_strlen((char *)src));
}
