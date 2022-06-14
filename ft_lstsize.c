/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:23:27 by ede-alme          #+#    #+#             */
/*   Updated: 2022/06/13 16:53:52 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL && ++i)
		lst = lst->next;
	return (i);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*sub2;
	t_list	*sub3;
	t_list	*sub4;

	lst = (t_list *)malloc(sizeof(t_list));
	sub2 = (t_list *)malloc(sizeof(t_list));
	sub3 = (t_list *)malloc(sizeof(t_list));
	sub4 = (t_list *)malloc(sizeof(t_list));
	lst->next = sub2;
	sub2->next = sub3;
	sub3->next = sub4;
	sub4->next = NULL;
	printf("Tamanha da lista -> %i\n", ft_lstsize(lst));
}
*/