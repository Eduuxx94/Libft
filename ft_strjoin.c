/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:44:47 by ede-alme          #+#    #+#             */
/*   Updated: 2022/05/26 14:13:55 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	out = malloc(sizeof(char) * (i1 + i2 + 1));
	if (!out)
		return (NULL);
	out[i1 + i2] = '\0';
	while (--i2 >= 0)
		out[i1 + i2] = s2[i2];
	while (--i1 >= 0)
		out[i1] = s1[i1];
	return (out);
}
/*
int	main(void)
{
	char	texto1[] = "Hello ";
	char	texto2[] = "World.";
	char	*str;

	str = ft_strjoin(texto1, texto2);
	printf("O texto: %s\n", str);
	free (str);
}
*/