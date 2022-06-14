/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:34:59 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/13 16:18:25 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*new;
	t_list	*lst;
	char	texto[7] = "Texto.";

	new = (t_list *)malloc(sizeof(t_list));
	lst = (t_list *)malloc(sizeof(t_list));
	lst = (void *)texto; //Foi adicionado o content na lista 'lst'.
	ft_lstadd_front(&lst, new); //new->next = lst
	printf("Ultimo Texto -> %s\n", new->next);
	return (0);
}
*/