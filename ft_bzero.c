/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 17:01:04 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:31:28 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (n > 0)
	{
		str[i] = '\0';
		n--;
		i++;
	}
}
/*
int	main(int argc, char *argv[])//this is my test result:
{
	int		i;
	int		number;
	
	if (argc == 3)
		number = (int) argv[2][0] - 48;
	i = 0;
	//Bellow is bzero call
	ft_bzero(argv[1], number); //argv[1] is the string, number is argv[2] Input
	if (argc == 3)
	{
		while (argv[1][i] == '\0')
		{
			printf("0");//this line replace '\0' be '0' to see in output 
			i++;
		}
		while (argv[1][i] != '\0')
		{
			printf("%c", argv[1][i]);
			i++;
			if (argv[1][i] == '\0')
			{
				printf("\n");
			}
		}
		return (0);
	}
	else
		printf("Usage: %s Input number\n", argv[0]);
}
*/
