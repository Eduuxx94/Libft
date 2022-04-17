/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:35:23 by ede-alme          #+#    #+#             */
/*   Updated: 2022/04/17 21:31:51 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

char	*ft_itoa(int n)
{
	long	number;
	char	*str;
	int		i;

	i = 0;
	number = n;
	str = (char *)malloc(sizeof(char) * (1 + 1));
	str[0] = '0';
	str[1] = '\0';
	if (n == 0 || !n)
		return (str);
	free (str);
	while ((n) && ++i)
		n = n / 10;
	if (number < 0 && ++i)
		number = number * -1;
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[0] = '-';
	str[i--] = '\0';
	while (number > 0)
	{
		str[i--] = 48 + (number % 10);
		number = number / 10;
	}
	return (str);
}
/*
int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("Minha -> %s12\n", str);
	free (str);
}
*/