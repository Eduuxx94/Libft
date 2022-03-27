/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 10:49:47 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:33:29 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == '\0' || i == size)
		dst[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char	texto[20] = "O ";
	char	texto2[20] = "1 texto comprido";

	printf("%d\n", sizeof(texto2) - 1);
	printf("%d\n", ft_strlcpy(texto2, texto, sizeof(texto2) - 1));
	printf("%s\n", texto2);
}*/
