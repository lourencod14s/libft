/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:03:22 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/21 22:25:12 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *out, const char *ins, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*ins)
		return ((char *)out);
	i = 0;
	while (out[i] && i < len)
	{
		if (out[i] == ins[0])
		{
			j = 0;
			while (out[i + j] == ins[j] && i + j < len)
			{
				if (ins[j + 1] == '\0')
					return ((char *)&out[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*
** The ft_strnstr() function locates the first occurrence of the 
** null-terminated string little in the	string big, where not more than
** len characters are searched. Characters that appear after a `\0'	
** character are not searched.
*/
/*int main()
{
	const char	*sb = "Esta e a frase grande";
	const char	*sl = "frase";
	char	*ret;

	const char	*sb1 = "Esta e a frase grande";
	const char	*sl1 = "frase";
	char	*ret1;

	ret = ft_strnstr(sb, sl, 5);
	ret1 = strnstr(sb1, sl1, 5);
	printf("%s\n\n", ret);
	printf("%s\n", ret1);	
}*/