/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:48:02 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 23:32:28 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_get_nbr(char *str, int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
	{
		while (size--)
		{
			str[size] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (--size)
		{
			str[size] = (n % 10) * -1 + '0';
			n /= 10;
		}
		str[size] = '-';
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	size;
	int		i;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	i = n / 10;
	while (i)
	{
		size++;
		i /= 10;
	}
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_get_nbr(ptr, n, size);
	return (ptr);
}

/* 
** The ft_itoa function converts an integer value to a null-terminated 
** string using the specified base and stores the result in the array 
** given by str parameter.
*/
/*int main()
{
	printf("ft_itoa\n");
	printf("%s\n", ft_itoa(-2147483648LL));
}*/