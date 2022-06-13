/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:59:22 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/10 18:12:05 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*out;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_check(s1[start], set))
		start++;
	while (end > start && ft_check(s1[end - 1], set))
		end--;
	out = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!out)
		return (NULL);
	while (start < end)
		out[i++] = s1[start++];
	out[i] = '\0';
	return (out);
}
/*
int	main(void)
{
	char	*text;

	text = ft_strtrim("errortexto da eserrorcola 42.", "error");
	printf("\nResultado: %s\n", text);
	free (text);
}
*/