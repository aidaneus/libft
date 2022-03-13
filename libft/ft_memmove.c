/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:11:25 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/10 15:21:57 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			a;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	a = 0;
	if (!n || d == s)
		return (dest);
	if (s < d)
	{
		while (a++ < n)
			d[n - a] = s[n - a];
	}
	else
	{
		while (n-- != 0)
			*(d)++ = *(s)++;
	}
	return (dest);
}
