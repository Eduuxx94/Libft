/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:36:08 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:32:34 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	character;
	size_t			i;

	character = (unsigned char) c;
	string = (unsigned char *) s;
	i = 0;
	while (n > 0)
	{
		if (string[i] == character)
			return (&string[i]);
		i++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	texto[20] = "O texto comprido.";

	printf("Minha.fu -> %p\n", ft_memchr(texto, 'i', 30));
	printf("Original -> %p\n", memchr(texto, 'i', 30));
}
*/