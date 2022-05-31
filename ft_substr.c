/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:24:46 by ede-alme          #+#    #+#             */
/*   Updated: 2022/05/25 15:31:23 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;
	size_t			size_out;

	i = 0;
	size_out = 0;
	out = NULL;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (i > start)
	{
		while (start + size_out < i && size_out < len)
			size_out++;
		len = size_out;
		out = malloc(sizeof(char) * size_out + 1);
		while (out && len > 0 && len--)
			out[len] = s[start + len];
	}
	else
		out = malloc(sizeof(char) * 1);
	if (out)
		out[size_out] = '\0';
	return (out);
}
/*
int	main(void)
{
	char	str[] = "O texto hello.";
	char	*sstr;

	sstr = ft_substr(str, 2, 300);
	printf("Texto -> '%s'\n", sstr);
	//free (sstr);
}
*/