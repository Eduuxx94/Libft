/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:48:55 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/22 17:16:51 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
//Function: Return (1) if true, Return (0) if false...
/*
//This code below is only to test code...
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("usage: %s Input \n", argv[0]);
	}
	else
		printf("%d\n", ft_isalpha(argv[1][0]));
}

//argc must be 2 to give the correct answer
*/