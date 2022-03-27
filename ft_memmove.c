/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:18:39 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/22 17:38:15 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer;
	char	*bufferdest;

	bufferdest = (char *)dest;
	buffer = (char *)src;
	if (!buffer || !bufferdest || !n)
		return (dest);
	if (bufferdest > buffer)
	{
		while (n--)
			bufferdest[n] = buffer[n];
	}
	else
		ft_memcpy(bufferdest, buffer, n);
	return (bufferdest);
}
/*
int	main(void)
{
	char	texto[20] = "O texto e comprido.";
	char	desti[20] = "O carro e          ";

	ft_memmove(desti + 10, texto + 10, 9);
	printf("%s\n", desti);
}*/