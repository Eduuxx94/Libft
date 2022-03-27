/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:33:18 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/21 17:35:36 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Strdup funct returns a pointer to a new string which is a duplicate of string s.
Memory for new string is obtained with malloc(3), and can be freed with free(3).
RETURN VALUE
	On  success, the strdup() function returns a pointer to the duplicated string.
	Returns NULL if insufficient memory was available, with errno set to indicate 
	the cause of the error.
*/

char	*ft_strdup(const char *s)
{
	char	*new;
	int		size;

	size = 0;
	while (s[size] != '\0')
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (size >= 0)
	{
		new[size] = s[size];
		size--;
	}
	return (new);
}
/*
int main(void)
{
	char	*texto1 = "O texto1.";
	char	*new1;
	char	*texto2 = "O texto2.";
	char	*new2;
	
	new1 = strdup(texto1);
	new2 = ft_strdup(texto2);
	printf("Original ->    fonte:  %s    copia:  %s \n", texto1, new1);
	printf("              endereco: %p       endereco: %p\n\n", &texto1, &new1);
	printf("MinhaFu. ->    fonte:  %s    copia:  %s \n", texto2, new2);
	printf("              endereco: %p       endereco: %p\n", &texto2, &new2);
}*/