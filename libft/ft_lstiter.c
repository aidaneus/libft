/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:21:25 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/11 15:26:51 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *n;

	if (lst != NULL)
	{
		n = lst;
		while (1)
		{
			(*f)(n->content);
			n = n->next;
			if (n == NULL)
				return ;
		}
	}
}
