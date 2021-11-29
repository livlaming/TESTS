/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 18:56:12 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/26 10:36:51 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	i = 0;
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	while (s[start] != '\0' && len > 0)
	{
		temp[i] = s[start];
		i++;
		len--;
		start++;
	}
	temp[i] = '\0';
	return (temp);
}
