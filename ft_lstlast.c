/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:53:20 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/14 12:38:13 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*___first;
	t_list	*sub2;
	t_list	*sub3;
	t_list	*sub4;

	___first = (t_list *)malloc(sizeof(t_list));
	sub2 = (t_list *)malloc(sizeof(t_list));
	sub3 = (t_list *)malloc(sizeof(t_list));
	sub4 = (t_list *)malloc(sizeof(t_list));
	___first->content = "Primeira lista"; // primeira lista recebe content str
	___first->next = sub2;
	sub2->next = sub3;
	sub3->next = sub4;
	sub4->content = "Ultima lista."; // ultima lista recebe content str
	printf("\tAntes  da funcao -> %s\n", ___first->content);
	printf("\tDepois da funcao -> %s\n", ft_lstlast(___first)->content);
	//a funcao retornou a ultima lista encontrada da lista '___first'
}
*/