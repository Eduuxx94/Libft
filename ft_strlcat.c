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
//#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	i = 0;
	while (!(dst == NULL && size == 0) && dst[i] && i < size)
		i++;
	j = 0;
	while (!(src == NULL && size == 0) && src[j])
		j++;
	if (size > i)
		ret = i + j;
	else
		ret = size + j;
	j = 0;
	while (size != 0 && src[j] && (i < size - 1))
		dst[i++] = src[j++];
	if (size > i)
		dst[i] = '\0';
	return (ret);
}

/*
int main(void)
{
	char	texto1[6] = "velho";
	char	texto2[6] = "tempo";
	char	texto3[6] = "velho";
	char	texto4[6] = "tempo";

	printf("%ld\n", sizeof(texto2) - 1);
	printf("%ld\n", ft_strlcat(texto2, texto1, 200));
	printf("%s\n", texto2);
	printf("\n\n");
	printf("%ld\n", sizeof(texto4) - 1);
	printf("%ld\n", strlcat(texto4, texto3, 200));
	printf("%s\n", texto4);
}
*/