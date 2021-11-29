/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 15:11:46 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/19 12:21:04 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *us;
	unsigned char uc;

	us = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 1)
	{
		if (*us != uc)
			us++;
		n--;
		if (*us == uc)
			return (us);
	}
	return (NULL);
}
