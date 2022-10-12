/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:14:08 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/24 20:51:21 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* 
** The ft_memcpy() function copies n bytes from memory area src to 
** memory area dest. The memory areas must not overlap.
*/
/*int	main()
{
	char	ptrs[10] = "abcdefghi";
	char	ptrd[10] = "";
	
	memcpy(ptrd, ptrs, 6);
	printf("%s\n", ptrd);
	ft_memcpy(ptrd, ptrs, 6);
	printf("%s\n", ptrd);
return 0;	
}*/