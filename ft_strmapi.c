/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:11:50 by ldias-fe          #+#    #+#             */
/*   Updated: 2022/09/23 00:26:59 by ldias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	f_func(unsigned int i, char str)
{
	printf("My f function: [i] = %d ==> %c\n", i, str);
	return (ft_toupper(str));
}

int	main(void)
{
	char	str[10] = "hello.";
	printf("The source is %s\n", str);
	char	*result = ft_strmapi(str, f_func);
	printf("The result is %s\n", result);
}*/
