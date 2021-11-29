/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/21 15:43:16 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/22 12:16:50 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_lstsize(t_list *lst)
{
	t_list		*temp;
	int			size;

	temp = lst;
	size = 0;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
