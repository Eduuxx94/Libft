/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:36:59 by ede-alme          #+#    #+#             */
/*   Updated: 2022/04/17 21:49:45 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdlib.h>
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	while (*s)
		write (fd, s++, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("Teste.txt", O_WRONLY);
	ft_putstr_fd("Exemplo 1.", fd);
	close(fd);
}
*/