/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:25:59 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 20:51:08 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* 
** The ft_isascii() function checks whether c is a 7-bit unsigned char value 
** that fits into the ASCII character set.
*/
/*int main()
{
	printf("%d\n", ft_isascii('p'));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii('\0'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('-9'));
	printf("%d\n", ft_isascii('7'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('.'));	
}*/