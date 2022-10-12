/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:29:08 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:27:41 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*
** The ft_tolower() function converts the letter c to lower case, if possible.
*/
/*int main()
{
	printf("%d\n", ft_tolower('P'));
	printf("%d\n", ft_tolower('\n'));
	printf("%d\n", ft_tolower('\0'));
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower(-9));
	printf("%d\n", ft_tolower(13));
	printf("%d\n", ft_tolower('Z'));
	printf("%d\n", ft_tolower('.'));	
}*/