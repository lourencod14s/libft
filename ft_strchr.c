/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:27:35 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:27:14 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 127)
		c %= 256;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}

/*
** The ft_strchr() function returns a pointer to the first occurrence
** of the character c in the string s.
*/
/*int main()
{
	char *s1 = "cajado";
	char	d = 'j';
	
	printf("%p\n", ft_strchr(s1, d));
	printf("%p\n", ft_strchr(s1, d) + 1);
	printf("%s\n", ft_strchr(s1, d));
}*/