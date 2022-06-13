/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:14:25 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/13 13:57:43 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (n == -2147483648 && write(fd, "-2147483648", 11))
		return ;
	if (n < 0 && write(fd, "-", 1))
		n = n * -1;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + 48;
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("text.txt", O_RDWR);
	ft_putnbr_fd(2147483648, fd);
	return (0);
}
*/