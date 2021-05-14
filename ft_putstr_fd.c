/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:54:09 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 18:44:41 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int a;

	a = 0;
	if (!s)
		return ;
	while (s[a] != 0)
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
}
