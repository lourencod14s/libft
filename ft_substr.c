/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:34:14 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 00:36:28 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_bug(void)
{
	char	*bug;

	bug = (char *) malloc(sizeof(char));
	bug[0] = 0;
	return (bug);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			j;
	size_t			buf;

	buf = ft_strlen(s);
	if (start > buf)
		return (ft_bug());
	if (len >= buf)
		len = buf - start;
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (!sub || !s)
		return (0);
	i = 0;
	while (s[i] != '\0' && i < start)
		i++;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		sub[j] = (char)s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
** The ft_substr() function returns the substring of the given string at
** the given start position with the given length (or smaller if the 
** length of the original string is less than start + length, or length 
** is bigger than MAXSTRINGLEN).
*/
/*int	main()
{
	char	str[] = "Hello World";
	unsigned int	ini = 3;
	size_t	t = 4;
	char	*res;

	res = ft_substr(str, ini, t);
	printf("%s\n", res);
}*/