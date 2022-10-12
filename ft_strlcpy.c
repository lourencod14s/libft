/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:28:09 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/24 01:10:12 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	j = 0;
	while (src[j] != '\0' && j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/*
** The ft_strlcpy() function copies up to size - 1 characters from the 
** NUL-terminated string src to dst, NUL-terminating the result. return
** the total length of the string they tried to create. For strlcpy() 
** that means the length of src.
*/
/*int	main()
{
	char	s1[] = "ola mundo";
	char	s2[100];
	size_t	dest_ptr = ft_strlcpy(s2, s1, 4);

	printf("src: %s  \n", s1);
	printf("dst: %s  \n", s2);
	printf("dest_ptr: %zu  \n", dest_ptr);
	return (0);
}*/
