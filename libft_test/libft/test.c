/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:09:05 by livlamin       #+#    #+#                */
/*   Updated: 2019/11/26 17:04:03 by livlamin      ########   odam.nl         */
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


// int test_strchr() 
// {
// 	const char *str;
// 	int ch;

// 	str = "debozebruinebeer";
// 	ch = 'b';
//     printf("%s|\n", strchr(str, ch));
//     printf("%s|\n", ft_strchr(str, ch));
// 	return (strchr(str, ch) == ft_strchr(str, ch));
// }

// size_t test_strlen() 
// {
// 	char *str;

// 	str = "nout heeft een ";
//     printf("%zu\n", ft_strlen(str));

// 	return (strlen(str) == ft_strlen(str));
// }

// // void test_strlcat()
// // {
// // 	char *dst, *src, *dst2, *src2;

// // 	dst = (char *)malloc(sizeof(char) * 30);
// // 	dst[0] = 't';	dst[1] = 'e';	dst[2] = 's';	dst[3] = 't';	dst[4] = 0;
// // 	src = (char *)malloc(sizeof(char) * 4);
// // 	src[0] = 'b';	src[1] = 'l';	src[2] = 'a';	src[3] = 0;

// // 	dst2 = (char *)malloc(sizeof(char) * 30);
// // 	dst2[0] = 't';	dst2[1] = 'e';	dst2[2] = 's';	dst2[3] = 't';	dst2[4] = 0;
// // 	src2 = (char *)malloc(sizeof(char) * 4);
// // 	src2[0] = 'b';	src2[1] = 'l';	src2[2] = 'a';	src2[3] = 0;

// // 	char *somethign;
// // 	char *xx;
// // 	somethign = NULL;
// // 	xx = strdup("fa;sjh faskdjfh asl;dfj as;lkdfj alsdkfj as;dlfkj as;ldfkj aslja s;ldkfj");
// // 	printf("ft: %zu\n", ft_strlcat(dst2, src2, 5000000));
// // 	printf("c : %zu\n", strlcat(dst, src, 5000000));
// // 	free(xx);
// // 	free(dst);
// // 	free(src);
// // }

// int test_strlcat() 
// {
// 	char dest[] = "een\0\0\0\0\0\0";
// 	const char src[] = "hallo";
// 	size_t size;
// 	char dest1[] = "een\0\0\0\0\0\0";
// 	const char src1[] = "hallo";
// 	size_t size1;

// 	size = 0;
// 	size1 = 0;
//     printf("%s\n", "ft_strlcat");
// 	printf("%lu\n", ft_strlcat(dest, src, size));
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
//     printf("%s\n", "strlcat");
// 	printf("%lu\n", strlcat(dest1, src1, size1));
// 	printf("%s\n", dest1);
// 	printf("%s\n", src1);
// 	return (strlcat(dest, src, size) == ft_strlcat(dest, src, size));
// }

// int test_strrchr()
// {
//     const char *str;
// 	int ch;

// 	str = "debozebruinebeer";
// 	ch = 'b';
// //printf("Test strchr: %s\n", test_strchr() ? "ok":"fail");
// printf("%s|\n", ft_strrchr(str, ch));
// printf("%s|\n", strrchr(str, ch));
// return (strrchr(str, ch) == ft_strrchr(str, ch));
// }

// int test_strlcpy()
// {
// 	char dest[] = "123456789";
// 	const char src[] = "nee";
// 	size_t size;
// 	char dest1[] = "123456789";
// 	const char src1[] = "nee";
// 	size_t size1;

// 	size1 = 1;
// 	size = 1;
// 	printf("%lu\n", ft_strlcpy(dest, src, size));
// 	printf("%s|\n", dest);
// 	printf("%s|\n", src);
// 	printf("%lu\n", strlcpy(dest1, src1, size1));
// 	printf("%s|\n", dest1);
// 	printf("%s|\n", src1);
// 	return (strlcpy(dest, src, size) == ft_strlcpy(dest, src, size));
// }



// int test_memset()
// { 
//     char str[50] = "GeeksForGeeks is for programming geeks."; 
//     // printf("\nBefore ft_memset(): %s\n", str); 
//     ft_memset(str + 13, '.', 8*sizeof(char)); 
//     // printf("After ft_memset():  %s", str); 
	
// 	char str1[50] = "GeeksForGeeks is for programming geeks."; 
//     // printf("\nBefore memset(): %s\n", str1); 
//     memset(str1 + 13, '.', 8*sizeof(char));
//     // printf("After memset():  %s\n", str); 
//     return (memset(str1 + 13, '.', 8*sizeof(char)) == ft_memset(str1 + 13, '.', 8*sizeof(char)));
// }


// int     test_bzero()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks."; 
//     // printf("\nBefore bzero(): %s\n", str); 
//     bzero(str + 13, 8*sizeof(char));
//     // printf("After bzero():  %s", str);

//     char str1[50] = "GeeksForGeeks is for programming geeks."; 
//     // printf("\nBefore ft_bzero(): %s\n", str1); 
//     ft_bzero(str1 + 13, 8*sizeof(char));
//     // printf("After ft_bzero():  %s", str1); 
// 	return (0);
// }

// int     test_memcpy()
// {
//     char dst[] = "halloikbeneenwoord";
//     // char src[] = "eend";
//     size_t n;
//     char dst1[] = "halloikbeneenwoord";
//     // char src1[] = "eend";
//     size_t n1;

//     n = 10;
//     n1 = 10;
//     memcpy(dst + 5, dst, n);
//     // printf("%s\n", dst);
//     // printf("%s\n", src);
//     ft_memcpy(dst1 + 5, dst1, n);
//     // printf("%s\n", dst1);
//     // printf("%s\n", src1);
//     return (ft_memcpy(dst1 + 5, dst1, n) == memcpy(dst1 + 5, dst1, n));
// }

// int     test_memccpy()
// {
//     char dst[] = "1234567563152376513751";
// 	char src[] = "ikbeneenaap";
//     int c; 
//     size_t n;
//     char dst1[] = "1234567563152376513751";
//     char src1[] = "ikbeneenaap";
//     size_t n1;
//     int c1; 

//     n = 0;
//     n1 = 0;
//     c = 'b';
//     c1 = 'b';
//     printf("%s|\n", memccpy(dst, src, c, n));
//     printf("%s|\n", dst);
//     printf("%s|\n", ft_memccpy(dst1, src1, c, n));
//     printf("%s|\n", dst1);
    
//     //return ((strcmp(dst, dst1) == 0));
// 	return (ft_memccpy(dst, src, c, n) == memccpy(dst1, src1, c1, n));

    
// }

// int     test_memmove()
// {

//     // char    src[] = "lorem ipsum dolor sit amet";
//     // char    *dest;
//     // dest = src + 1;
//     // printf("%i", src != ft_memmove(src, dest, 0));
    
//     char   src[] = "lorem ipsum dolor sit amet";
//     char *dst = src + 1;
//     size_t n;
    
//     char    src1[] = "lorem ipsum dolor sit amet";
//     char *dst1 = src1 + 1;
//     size_t n1;

//     n = 0;
//     n1 = 0;
//     printf("src %s|\n", dst);
//     printf("dst %s|\n", src);
//     memmove(src, dst, n);
//     printf("src %s|\n", dst);
//     printf("dst %s|\n", src);
//     char *result = ft_memmove(src1, dst1, n);
//     printf("src%s|\n", dst1);
//     printf("dst%s|\n", src1);
//     printf("result  : %p<--\noriginal:%p<--\n", result, src1);
//     //return (ft_memmove(dst, src, n) == memmove(src1, dst1, n));
    
//     return (0);
// }


// int     test_memchr()
// {
//     char dst[] = "123456789";
//     int c;
//     size_t n;
//     char dst1[] = "123456789";
//     int c1;
//     size_t n1;

//     c = '4';
//     c1 = '4';
//     n = 4;
//     n1 = 4;
//     memchr(dst + 5, c, n);
//     printf("%s|\n", dst);
//     //printf("%s\n", src);
//     ft_memchr(dst1 + 5, c, n);
//     printf("%s|\n", dst1);
//     //printf("%s\n", src1);
//     return (ft_memchr(dst1, c, n) == memchr(dst1, c, n));
// }

// // int     test_isalpha()
// // {
// //     int c;
// //     int c1;

// //     c = 'Z';
// //     c1 = 'Z';
// //     // printf("%d\n", ft_isalpha(c));
// //     // printf("%d\n", isalpha(c));
// //     return (ft_isalpha(c) == isalpha(c));

// // }


// // int     test_isdigit()
// // {
// //     int c;
// //     int c1;

// //     c = '0';
// //     c1 = '0';
// //     printf("%d\n", ft_isdigit(c));
// //     printf("%d\n", isdigit(c));
// //     return (ft_isdigit(c) == isdigit(c));

// // }

// int     test_memcmp()
// {
//     char s1[] = "zyxbcdefgh";
// 	char s2[] = "abcdefgxyz";
//     size_t n;
//     char s11[] = "zyxbcdefgh";
//     char s22[] = "abcdefgxyz";
//     size_t n1;

//     n = 0;
//     n1 = 0;
//     printf("%d|\n", memcmp(s1, s2, n));  
//     printf("ft_%d|\n", ft_memcmp(s11, s22, n1));
//     //return ((strcmp(dst, dst1) == 0));
// 	return (memcmp(s1, s2, n) == ft_memcmp(s11, s22, n1));
// }

// int     test_strnstr()
// {
//     char s1[] = "lorem ipsum dolor sit amet";
// 	char s2[] = "ipsumm";
//     size_t n;
//     char s11[] = "lorem ipsum dolor sit amet";
//     char s22[] = "ipsumm";
//     size_t n1;

//     n = 30;
//     n1 = 30;
//     printf("%s|\n", strnstr(s1, s2, n));
//     printf("ft = %s|\n", ft_strnstr(s11, s22, n1));
    
//     // return (0);
//     //return ((strcmp(dst, dst1) == 0));
// 	return (strnstr(s1, s2, n) == ft_strnstr(s11, s22, n1));
//     // return (1);
// }

// int     test_strncmp()
// {
//     char s1[] = "zyxbcdefgh";
// 	char s2[] = "abcdwxyz";
//     size_t n;
//     char s11[] = "zyxbcdefgh";
//     char s22[] = "abcdwxyz";
//     size_t n1;

//     n = 0;
//     n1 = 0;
//     printf("%d|\n", strncmp(s1, s2, n));
//     printf("ft = %d|\n", ft_strncmp(s11, s22, n1));
    
//     // return (0);
//     //return ((strcmp(dst, dst1) == 0));
// 	return (strncmp(s1, s2, n) == ft_strncmp(s11, s22, n1));
//     // return (1);
// }

// int     test_strsub()
// {
//     char s1[] = "zyxbcdefgh";
//     char *res;

//     int i;
//     i = 0;
//     res = ft_substr(s1, 2, 5);
//     while(res[i])
//     {
//          printf("%c",res[i]);
//          i++;     
//     }
// //     printf("%p", res[i]);
// //     return (1);
    
//     // return (0);
//     //return ((strcmp(dst, dst1) == 0));
// 	// return (substr(s1, 400, 20) == ft_substr(s11, 400, 20));
//     return (1);
// }


int     test_strtrim()
{
    char s11[] = "         ";
    printf("%s|\n", ft_strtrim(s11, " "));
    printf("%p", ft_strtrim(s11, " "));
    return (0);
    //return ((strcmp(dst, dst1) == 0));
}

// int     test_itoa()
// {
//     int s;
//     s = -623;

//     // printf("%d|\n", strtrim(s1, s2));  
//     printf("ft: %s| expected: %i\n", ft_itoa(s), s);
//     printf("%p", ft_itoa(s));
//     return (1);
//     //return ((strcmp(dst, dst1) == 0));
// }


// // int     test_split()
// // {
// //     char const s11[] = "                  olol";
// //     char c;
// //     char **res;
    
// //     c = ' ';
// //     int i = 0;
// //     res = ft_split(s11, c);
// //     while (i < 3)
// //     {
// //         printf("%s|\n", res[i]);
// //         i++;
// //     }
// //     return (1);
// //     //return ((strcmp(dst, dst1) == 0));
// // }

// int     test_split()
// {
//     const char *str;
//     char c = ' ';
//     char **res;
//     int i;
    
//     i = 0;
//     str = " hallo ";
//     res = ft_split(str, c);
//     while(res[i])
//     {
//         printf("%s|\n",res[i]);
//         i++;
//     }
//     // printf("%s|\n",res[0]);
//     printf("%p", res[i]);
//     return (1);
// }



// int     test_putstr_fd()
// {
//     char s[] = "hallo";
//     int fd;

//     fd = 1; 
  
//     ft_putstr_fd(s, fd);
//     printf("%c", '\n');
//     return (1);
//     //return ((strcmp(dst, dst1) == 0));
// }

// int     test_ft_putnbr_fd()
// {
//     int s;
//     int fd;

//     s = 123;
//     fd = 1; 
  
//     ft_putnbr_fd(s, fd);
//     printf("%c", '\n');
//     return (1);
//     //return ((strcmp(dst, dst1) == 0));
// }

// int     test_calloc()
// {
    
//     size_t count;
//     size_t size;

//     count = 4;
//     size = 3;
//     ft_calloc(count, size);
//     return (calloc(count, size) == ft_calloc(count, size));
// }


//t_list		*ft_create_elem(void *data);
//t_list		ft_list_push_back(t_list **begin_list, void *data);
// int     test_lstnew()
// {
// 	t_list *list;

// 	list = ft_lstnew("HUISi");
// 	// ft_list_push_back(&list, "HAAI");
// 	// ft_list_push_back(&list, "HOOI");
// 	// ft_list_push_back(&list, "HAL");
	
// 	while (list)
// 	{
// 		printf("%s\n", (char*)list->content);
// 		list = list->next;
// 	}
// 	return (0);
// }


// int     test_lstadd_front()
// {
// 	t_list		*begin;
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;

// 	char		str [] = "lorem";
// 	char		str2 [] = "ipsum";
// 	char		str3 [] = "dolor";
// 	char		str4 [] = "sit";

// 	elem = ft_lstnewone(str);
// 	elem2 = ft_lstnewone(str2);
// 	elem3 = ft_lstnewone(str3);
// 	elem4 = ft_lstnewone(str4);
// 	alarm(5);
// 	if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		begin = NULL;
// 		ft_lstadd_front(&begin, elem4);
// 		ft_lstadd_front(&begin, elem3);
// 		ft_lstadd_front(&begin, elem2);
// 		ft_lstadd_front(&begin, elem);
// 		while (begin)
// 		{
// 			ft_print_result(begin);
// 			begin = begin->next;
// 		}
// 	}
// 	return (0);
// }
// {
//     t_list **alst;
// 	t_list *list;

//     alst = NULL;
//     list = ft_lstnew("HUISi");
// 	ft_lstadd_front(alst, list);
// 	// ft_list_push_back(&list, "HAAI");
// 	// ft_list_push_back(&list, "HOOI");
// 	// ft_list_push_back(&list, "HAL");
	
// 	// while (list)
// 	// {
// 	// 	printf("%s\n", (char*)list->content);
// 	// 	list = list->next;
// 	// }
// 	return (0);
// }



int main ()
{
// printf("Test strchr: %s\n", test_strchr() ? "ok":"---FAIL");
// printf("Test strlen: %s\n", test_strlen() ? "ok":"---FAIL");
// printf("Test strlcat: %s\n", test_strlcat() ? "ok":"---FAIL");
// test_strlcat();
// printf("Test strrchr: %s\n", test_strrchr() ? "ok":"---FAIL");
// printf("Test strlcpy: %s\n", test_strlcpy() ? "ok":"---FAIL");
// printf("Test memset: %s\n", test_memset() ? "ok":"---FAIL");
// printf("%s","Test bzero: void return\n");
// printf("Test memcpy: %s\n", test_memcpy() ? "ok":"---FAIL");
// //printf("Test memccpy: %s\n", test_memccpy() ? "ok":"---FAIL");
// printf("Test memmove: %s\n", test_memmove() ? "ok":"---FAIL");
// printf("Test memchr: %s\n", test_memchr() ? "ok":"---FAIL");
// printf("Test isalpha: %s\n", test_isalpha() ? "ok":"---FAIL");
// printf("Test isdigit: %s\n", test_isdigit() ? "ok":"---FAIL");
// printf("Test memcmp: %s\n", test_memcmp() ? "ok":"---FAIL");
// printf("Test strnstr: %s\n", test_strnstr() ? "ok":"---FAIL");
// printf("Test strncmp: %s\n", test_strncmp() ? "ok":"---FAIL"); 
// printf("Test split: %s\n", test_split() ? "ok":"---FAIL");
printf("Test strtrim: %s\n", test_strtrim() ? "ok":"---FAIL");
// printf("Test strrchr: %s\n", test_strrchr() ? "ok":"---FAIL");
// printf("Test itoa: %s\n", test_itoa() ? "ok":"---FAIL");
// printf("Test calloc: %s\n", test_calloc() ? "ok":"---FAIL");
// printf("Test putstr_fd: %s\n", test_putstr_fd() ? "ok":"---FAIL");
// printf("Test ft_putnbr_fd: %s\n", test_ft_putnbr_fd() ? "ok":"---FAIL");
// printf("Test ft_strsub: %s\n", test_strsub() ? "ok":"---FAIL");
// printf("Test ft_lstadd_front: %s\n", test_lstadd_front() ? "ok":"---FAIL");


return (0);
}
