/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:26:16 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:26:45 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* 
**The ft_isdigit() function checks for a digit (0 through 9).
*/
/*int main()
{
	printf("%d\n", ft_isdigit('p'));
	printf("%d\n", ft_isdigit('\n'));
	printf("%d\n", ft_isdigit('\0'));
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", ft_isdigit('-9'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit('.'));	
}*/