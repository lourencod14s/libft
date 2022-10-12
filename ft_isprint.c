/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:27:12 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:26:50 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* 
**The ft_isprint() function checks for any printable character including 
**space.
*/
/*int main()
{
	printf("%d\n", ft_isprint('p'));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint('-9'));
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", ft_isprint('"'));
	printf("%d\n", ft_isprint('.'));	
}*/