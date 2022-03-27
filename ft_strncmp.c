/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 17:06:54 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/21 17:37:11 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	char	texto1[20] = "O textou";
	char	texto2[20] = "O texto";

	printf("Original -> %d\n", strncmp(texto1, texto2, sizeof(texto1)));
	printf("MinhaFun -> %d\n", ft_strncmp(texto1, texto2, sizeof(texto1)));
}
*/