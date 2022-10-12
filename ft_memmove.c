/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:38:29 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/28 21:25:15 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)(src);
	d = (char *)(dest);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* 
** The ft_memmove() function copies n bytes from memory area src to
** memory area dest. The memory areas may overlap: copying takes place
** as though the bytes in src are first copied into a temporary array
** that does not overlap src or dest, and the bytes are then copied from
** the temporary array to dest.
*/
/*int	main()
{
	char	ptrs[10] = "abcdefghi";
	char	ptrd[3] = "ddd";
	
	memmove(ptrd, ptrs, 3);
	printf("%s\n", ptrd);
	ft_memmove(ptrd, ptrs, 3);
	printf("%s\n", ptrd);
return 0;	
}*/