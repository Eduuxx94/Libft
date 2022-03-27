/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:06:40 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/21 17:33:50 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	signal;

	signal = 0;
	number = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + ((int) *str - 48);
		str++;
	}
	if (signal == -1)
		return (signal * number);
	return (number);
}
/*
int	main(void)
{
	char	texto1[20] = "1234qwqw";

	printf("Original -> %d\n", atoi(texto1));
	printf("MinhaFun -> %d\n", ft_atoi(texto1));
}
*/