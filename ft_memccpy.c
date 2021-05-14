/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:34:38 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/03 18:16:10 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			d;

	d = 0;
	a = (unsigned char*)dest;
	b = (unsigned char*)src;
	while (d < n)
	{
		a[d] = b[d];
		if (a[d] == (unsigned char)c)
			return (dest + d + 1);
		d++;
	}
	return (NULL);
}
