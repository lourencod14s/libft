/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:43:43 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/27 02:52:05 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getstr(char *str, char e)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == e)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != e)
			i++;
	}
	return (count);
}

static int	ft_str_len(char *str, char d)
{
	int	i;

	i = 0;
	while (str[i] != 0 && str[i] != d)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;
	int		count;
	int		length;
	int		j;

	count = ft_getstr((char *)s, c);
	copy = malloc ((count + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			length = ft_str_len((char *)s, c);
			copy[j] = ft_substr((char *)s, 0, length);
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	copy[j] = 0;
	return (copy);
}

/*
** Allocates (with malloc(3)) and returns an array of strings obtained by 
** splitting ’s’ (the string to be split) using the character ’c’ as a 
** delimiter. The array must end with a NULL pointer.The array of new 
** strings resulting from the split, or NULL if allocation fails.
*/
/*int	main(void)
{
//	char	string[] = "Oi todo mundo";
	char	string2[] = "   lorem   ipsum ";
	char	**result;
	int		i;
	
	result = ft_split(string2, ' ');

	i = 0;
	while (result[i] != 0) 
	{
		printf("string[%d] = '%s'\n", i, result[i]);
		i++;
	}
}*/
