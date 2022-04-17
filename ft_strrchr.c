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

/*
The strrchr() function locates the last occurrence of c (converted to a char) in
	the string pointed to by s.  The terminating null character is considered to
	be part of the string; therefore if c is `\0', the functions locate the
	terminating `\0'.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	texto[20] = "";

	printf("Original -> %d\n", strrchr(texto, NULL));
	printf("Minhafu. -> %d\n", ft_strrchr(texto, NULL));
	printf("Tamanho do texto: '%s' -> %d\n", texto, sizeof(texto - 1));
}
*/