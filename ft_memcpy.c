/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:35:12 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:32:50 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*instr;
	unsigned char	*outstr;

	i = 0;
	instr = (unsigned char *)src;
	outstr = (unsigned char *)dest;
	while (n > 0)
	{
		outstr[i] = instr[i];
		i++;
		n--;
	}
	return (outstr);
}
/*
int	main(void)
{
	const char	str1[50] = "Transformacao de texto.";
	char		str2[50];

	strcpy(str2, "Hello, world.");
	printf("Antes da funcao: %s\n", str2);
	ft_memcpy(str2, str1, 8);
	printf("Depois da funcao: %s\n", str2);
}*/
