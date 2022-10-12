/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:25:37 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/23 04:40:59 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mrg;
	int		size;
	int		i;
	int		j;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	mrg = (char *) malloc((size + 1) * sizeof(char));
	if (!mrg)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		mrg[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		mrg[i] = s2[j];
		j++;
		i++;
	}
	mrg[i] = '\0';
	return (mrg);
}

/*
** The ft_strjoin() function concatenates `s1` and `s2` into another 
** string. Memory for the new string is obtained with malloc(), and
** can be freed with free(). Returns the new string or null if unable
** to allocate.
*/
/*int main()
{
	char	str1[] = "ola";
	char	str2[] = "mundo";
	char	*ptr;

	ptr = ft_strjoin(str1, str2);
	printf("nova string: %s\n", ptr);
}*/