/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:29 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:34:02 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = sizeof(s) - 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	texto[20] = "O texto.";

	printf("Original -> %d\n", strrchr(texto, 'h'));
	printf("Minhafu. -> %d\n", ft_strrchr(texto, 'h'));
	printf("Tamanho do texto: '%s' -> %d\n", texto, sizeof(texto - 1));
}*/
