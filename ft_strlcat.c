/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:34:02 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/23 20:24:00 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	index;
	int	dstsize;

	dstsize = ft_strlen(dst);

	i = 0;
	index = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[index] != '\0' && sizeof(dst) + i < size - 1)
	{
		if (size - 1 > i)
			dst[i] = src[index];
		i++;
		index++;
	}
	dst[i] = '\0';
	return (sizeof(dst) + sizeof(src));
}
*/

size_t	ft_strlcat2(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	dest_len = 0;
	src_len = 0;
	i = 0;
	if (dest_len)
	{
		while (dest[i] != '\0')
			i++;
	}
	dest_len = i;
	i = 0;
	if(src_len)
	{
		while(src[i] != '\0')
			i++;
	}
	src_len = i;
	i = 0;
	j = dest_len;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] != '\0' && dest_len + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
			dest[j] = '\0';
		}
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

int main(void)
{
	char	texto1[20] = "O velho trapo";
	char	texto2[20] = "Exemplo de texto";
	
	char	texto3[20] = "O velho trapo";
	char	texto4[20] = "Exemplo de texto";

	printf("%ld\n", sizeof(texto2) - 1);
	printf("%ld\n", ft_strlcat(texto2, texto1, 25));
	printf("%s\n", texto2);

	printf("%ld\n", sizeof(texto4) - 1);
	printf("%ld\n", ft_strlcat2(texto4, texto3, 25));
	printf("%s\n", texto4);
}