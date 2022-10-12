/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:34:12 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/24 01:39:09 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	count;

	count = 0;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (size <= d)
		return (size + s);
	while ((count + d) < (size - 1) && src[count])
	{
		dst[d + count] = src[count];
		count++;
	}
		dst[d + count] = '\0';
	return (d + s);
}

/*
** The ft_strlcat() function appends the NUL-terminated string src 
** to the end of dst. It will append at most size - strlen(dst) - 
** 1 bytes, NUL-terminating the result. Return the total length of 
** the string they tried to create. (dst + src)
*/
/*int	main()
{
	char	d[] = "Olavo";
	size_t	res;
	char	d4[] = "Olavo";
	size_t	res1;
	char	d1[] = "";
	char	d2[] = "";
	char	d3[] = "";
	char	d5[] = "";
	char	d6[] = "";
	char	d7[] = "";

	res = ft_strlcat(d, "Bicalho", sizeof(char)*7);
	printf("%zu\n", res);
	printf("%s\n" , d);
	res1 = strlcat(d4, "Bicalho", sizeof(char)*7);
	printf("%zu\n", res1);
	printf("%s\n\n" , d4);
	res = ft_strlcat(d1, "kkkk", sizeof(char)*8);
	printf("%zu\n", res);
	printf("%s\n" , d1);
	res1 = strlcat(d5, "kkkk", sizeof(char)*8);
	printf("%zu\n", res1);
	printf("%s\n\n" , d5);
	res = ft_strlcat(d2, "kkkk", sizeof(char)*6);
	printf("%zu\n", res);
	printf("%s\n" , d2);
	res1 = strlcat(d6, "kkkk", sizeof(char)*6);
	printf("%zu\n", res1);
	printf("%s\n\n" , d6);
	res = ft_strlcat(d3, "kkkk", sizeof(char)*10);
	printf("%zu\n", res);
	printf("%s\n" , d3);
	res1 = strlcat(d7, "kkkk", sizeof(char)*10);
	printf("%zu\n", res1);
	printf("%s\n" , d7);
}*/
