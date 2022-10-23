/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:58:05 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/21 18:58:06 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	func(void *content)
{
	int	i;

	i = 0;
	while (((char *)content)[i])
	{
		((char *)content)[i] = '5';
		i++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*ptr;
// 	t_list	*head;

// 	char strf[] = "hello";
// 	char strs[] = "world";
// 	char strt[] = "!";

// 	first = ft_lstnew(strf);
// 	second = ft_lstnew(strs);
// 	third = ft_lstnew(strt);

// 	head = first;

// 	head->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	ptr = head;

// 	ft_lstiter(head, func);

// 	while (ptr)
// 	{
// 		printf("%s\n", ptr->content);
// 		ptr = ptr->next;
// 	}
// 	return (0);
// }