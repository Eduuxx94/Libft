/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:02:50 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/19 23:28:12 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*texto1;
	unsigned char	*texto2;

	texto1 = (unsigned char *) s1;
	texto2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*texto1 != *texto2)
			return (*texto1 - *texto2);
		n--;
		texto1++;
		texto2++;
	}
	return (0);
}
/*
int main(void)
{
    char    texto1[20] = "O texto";
    char    texto2[20] = "O texto";
    
    printf("Original -> %d\n", memcmp(texto1, texto2, 5));
    printf("MinhaFun -> %d\n", ft_memcmp(texto1, texto2, 5));
}*/