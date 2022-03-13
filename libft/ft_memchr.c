/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:34:46 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/10 16:05:51 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*a;
	size_t			b;

	b = 0;
	a = (unsigned char*)arr;
	while (b != n)
	{
		if (a[b] == (unsigned char)c)
		{
			return (&a[b]);
			break ;
		}
		b++;
	}
	return (NULL);
}
