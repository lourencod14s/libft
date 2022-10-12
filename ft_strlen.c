/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:28:29 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 20:59:19 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
** The ft_strlen() function calculates the length of the string pointed
** to by str, excluding the terminating null byte ('\0').
*/
/*int	main()
{
	printf("%d\n", ft_strlen("lourenco"));
}*/