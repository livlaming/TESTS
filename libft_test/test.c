/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:09:05 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/28 10:08:37 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

//bash <(curl -sL bit.ly/qnorm)

int		test_ft_memccpy() 
{
	char *src;
	char *src1;
	char *dst;
	char *dst1;

	dst = (char *)calloc(sizeof(char), 1);
	dst1 = (char *)calloc(sizeof(char), 1);
	src = "berend";
	src1 = "berend";
	ft_memccpy(dst, src, '\0', 1);
	memccpy(dst1, src1, '\0', 1);
	printf("1: %s, 2: %s, cmp: %i\n", dst, dst1, strcmp(dst, dst1));

	char	ft1[100] = "11111";
	char	ft2[100] = "abxc";
	char	c1[100] = "11111";
	char	c2[100] = "abxc";
	ft_memccpy(ft1, ft2, 'c', 3);
	memccpy(c1, c2, 'c', 3);
	printf("1: %s, 2: %s, cmp: %i\n", ft1, c1, strcmp(ft1, c1));
	return (!strcmp(dst, dst1) && !strcmp(ft1, c1));
}

int		test_ft_strlcpy()
{
	char	*src1;
	char	*src2;
	src1 = "test\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	src2 = "test\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	printf("%zu\n", ft_strlcpy(NULL, src1, 10));
	// printf("%zu\n", strlcpy(NULL, src2, 10));
	return (ft_strlcpy(NULL, src1, 10) && strlcpy(NULL, src2, 10));
	
}

int		test_ft_itoa()
{
	char *result;
	int num;
	
	num = -2147483647;
	result = ft_itoa(num);
	printf("%s\n", result);
	free(result);
	return (0);
}

int		test_ft_substr()
{
	char	*str;
	str = "hallo hallo hallo hallo hallo!";
	// ft_substr(str, 0, (size_t)-10);
	return ((strcmp(ft_substr(str, 0, (size_t)-10), "hallo hallo hallo hallo hallo!") == 0));

}

int     test_strtrim()
{
    char s11[] = "         ";
	ft_strtrim(s11, " ");
    return ((strcmp(ft_strtrim(s11, " "), "") == 0));
}

int test_strrchr()
{
    const char *str;
	int ch;

	str = "debozebruinebeer";
	ch = 'b';
//printf("Test strchr: %s\n", test_strchr() ? "ok":"fail");
// printf("%s|\n", ft_strrchr(str, ch));
// printf("%s|\n", strrchr(str, ch));
return (strrchr(str, ch) == ft_strrchr(str, ch));
}

int		main ()
{
	printf("Test strrchr: %s\n", test_strrchr() ? "ok":"---FAIL");
	printf("Test strtrim: %s\n", test_strtrim() ? "ok":"---FAIL");
	printf("Test ft_memccpy: %s\n", test_ft_memccpy() ? "ok" : "---FAIL");
	// printf("Test ft_strlcpy: %s\n", test_ft_strlcpy() ? "ok" : "---FAIL");
	// printf("Test ft_itoa: %s\n", test_ft_itoa() ? "ok" : "---FAIL");
	printf("Test ft_substr: %s\n", test_ft_substr() ? "ok" : "---FAIL");
	printf("Test strtrim: %s\n", test_strtrim() ? "ok":"---FAIL");
	return (0);
}
