/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:25:21 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:26:28 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || \
	(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/* The ft_isalnum() function checks for an alphanumeric character; it is 
** equivalent to (ft_isalpha(c) || ft_isdigit(c)).
*/
/*int main()
{
	printf("%d\n", ft_isalnum('p'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('\0'));
	printf("%d\n", ft_isalnum(0));
	printf("%d\n", ft_isalnum(8));
	printf("%d\n", ft_isalnum(7));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('.'));	
}*/