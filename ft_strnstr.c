/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:44:01 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:33:49 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

/*
The ft_strnstr() function locates the first occurrence of the null-terminated
	string needle in the string haystack, where not more than len char-
    acters are searched.  Characters that appear after a `\0' character are not
	searched.  Since the strnstr() function is a FreeBSD specific API,
    it should only be used when portability is not a concern.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		size;

	i = 0;
	size = 0;
	while (needle[size] != '\0')
		size++;
	if (needle == NULL || size == 0)
		return ((char *)haystack);
	if (size > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&haystack[i], needle, size) == 0)
		{
			if (i + size > len)
				return (NULL);
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	char	texto1[20] = "escola 42 futura";
	char	texto2[20] = "42 futur";

	printf("MinhafUN: -> %s\n", ft_strnstr(texto1, texto2, 19));
	printf("valor minha: %d\n", sizeof(ft_strnstr(texto1, texto2, 19)));
	printf("Original: -> %s\n", strnstr(texto1, texto2, 19));
	printf("valor origi: %d\n", sizeof(strnstr(texto1, texto2, 19)));

}
*/