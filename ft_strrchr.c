/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:28:51 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/25 22:17:30 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c > 127)
		c %= 256;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*
** The ft_strrchr() function returns a pointer to the last occurrence
** of the character c in the string s.
*/
/*int main()
{
	char *s1 = "cajado";
	char	d = 'a';
	
	printf("%p\n", ft_strrchr(s1, d));
	printf("%s\n", ft_strrchr(s1, d));
	printf("%s\n", ft_strrchr(s1, d));
}*/