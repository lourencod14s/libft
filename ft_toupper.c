/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:29:17 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:27:48 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*
** The ft_toupper() function converts the letter c to upper case, if possible.
*/
/*int main()
{
	printf("%d\n", ft_toupper('p'));
	printf("%d\n", ft_toupper('\n'));
	printf("%d\n", ft_toupper('\0'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper(-9));
	printf("%d\n", ft_toupper(13));
	printf("%d\n", ft_toupper('z'));
	printf("%d\n", ft_toupper('.'));	
}*/