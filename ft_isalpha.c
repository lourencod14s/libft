/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:26:21 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:26:34 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
** The ft_isalpha() function checks for an alphabetic character; in the 
** standard "C" locale, it is equivalent to (ft_toupper(c) || ft_tolower(c)).
*/
/*int main()
{
	printf("%d\n", ft_isalpha('p'));
	printf("%d\n", ft_isalpha('\n'));
	printf("%d\n", ft_isalpha('\0'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha(-9));
	printf("%d\n", ft_isalpha('13'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('.'));	
}*/