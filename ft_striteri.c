/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 08:59:49 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/13 12:41:29 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_change_char(unsigned int i, char *c)
{
	*c = '*';
}

int	main(void)
{
	char	texto[18] = "Exemplo de texto.";

	ft_striteri(texto, ft_change_char);
	printf("O texto -> %s\n", texto);
}
*/