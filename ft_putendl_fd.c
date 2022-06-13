/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:37:19 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/13 13:00:12 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	texto[7] = "Texto.";
	int		fd;

	fd = open("test.txt", O_RDWR);
	if (fd < 0)
		return (0);
	ft_putendl_fd(texto, fd);
	return (0);
}
*/