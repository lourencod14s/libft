/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:48:39 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/21 21:31:19 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	if (n > 0)
	{
		while (n--)
		{
			*((unsigned char *)(str + n)) = ((unsigned char) c);
		}
	}
	return (str);
}

/* The ft_memset() function fills the first n bytes of the memory area 
** pointed to by s with the constant byte c.
*/
/*int	main()
{
	char	ptr[15] = "Im not dog no!";
	printf("\nAntes de memset(): %s\n", ptr);

	ft_memset(ptr + 3, 'H', 2 * sizeof(char));
	printf("\ndepois de memset(): %s\n", ptr);
return (0);
}*/
