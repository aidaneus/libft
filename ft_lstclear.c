/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:18:31 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/11 15:28:52 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *a;
	t_list *b;

	b = *lst;
	while (b)
	{
		a = b->next;
		if (del)
		{
			del(b->content);
		}
		free(b);
		b = a;
	}
	*lst = NULL;
}
