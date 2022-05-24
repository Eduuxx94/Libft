/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:24:46 by ede-alme          #+#    #+#             */
/*   Updated: 2022/05/24 15:54:28 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char				*out;
	unsigned int		i;
	int					size;

	i = 0;
	size = 0;
	while (s[i])
		i++;
	if (start < i)
	{
		while ((size + start) < i && len != 0 && len--)
		{
			size++;
		}
		out = malloc(sizeof(char) * size + 1);
		out[size] = '\0';
		size--;
		while (size >= 0)
		{
			out[size] = s[size + start];
			size--;
		}
		return (out);
	}
	return (NULL);
}
/*
int main(void)
{
	char	str[15] = "O texto hello.";
	char	*sstr;

	sstr = ft_substr(str, 8, 5);
    printf("Texto -> %s\n", sstr);
}*/
