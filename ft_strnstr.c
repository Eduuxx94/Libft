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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	res;

	i = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		res = 0;
		while (needle[res] == haystack[i + res])
		{
			if (needle[res + 1] == '\0')
				return ((char *) haystack + i);
			res++;
			len--;
		}
		i++;
		if (needle[res - 1] != haystack [i + res - 1])
			len--;
	}
	return (NULL);
}
/*
int main(void)
{
	char	texto1[20] = "O texto comprido";
	char	texto2[20] = "i";

	printf("Original: -> %s\n", strnstr(texto1, texto2, 19));
	printf("MinhafUN: -> %s\n", ft_strnstr(texto1, texto2, 19));
}*/