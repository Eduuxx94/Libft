/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:00:45 by ede-alme          #+#    #+#             */
/*   Updated: 2022/01/18 17:31:37 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *calloc(size_t nmemb, size_t size);

    The calloc function allocates memory for an array of nmemb elements of size
	bytes each and returns a  pointer  to  the  allocated memory.
	The  memory is set to zero.  If nmemb or size is 0, then calloc() returns 
	either NULL, or a unique pointer value that can later be successfully passed
	to free().  If the multiplication of nmemb and size would result in integer
	overflow,  then  calloc()returns  an  error.  By contrast, an integer 
	overflow would not be detected in the following call to malloc(), with the
	result that an incorrectly sized block of memory would be allocated:

           malloc(nmemb * size);
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	int				count;

	count = nmemb * size;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	i = 0;
	while (count--)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
/*
int	main(void)
{
	int	*p1;
	int	*p2;
	int	i1;
	int	i2;

	p1 = (int *) calloc(5, sizeof(int));
	for(i1 = 0; i1 < 5; i1++)
	{
		printf("Original -> Endereco de p1[%i] = %p |", i1, &p1[i1]);
		printf("| Valor de p1[%i] = %i\n",  i1, *(p1+i1));
	}
	printf("\n");
	p2 = (int *) ft_calloc(5, sizeof(int));
	for(i2 = 0; i2 < 5; i2++)
	{
		printf("MinhaFu. -> Endereco de p2[%i] = %p |", i2, &p2[i2]);
		printf("| Valor de p2[%i] = %i\n",  i2, *(p2+i2));
	}
}
*/