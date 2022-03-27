/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:36:26 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:33:06 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int c, size_t n)
{
	size_t			i;
	unsigned char	*nstr;

	nstr = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		nstr[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Usage: %s Input\n", argv[0]);
	else
		printf("%s\n", ft_memset(argv[1], 'A', 3));
}*/
