/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:40:31 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 13:06:48 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	unsigned int	a;
	size_t			b;
	size_t			c;

	a = 0;
	b = 0;
	c = 0;
	while (src[a] != '\0')
		a++;
	while (dst[b] && b < s)
		b++;
	while (src[c] && (b + c + 1) < s)
	{
		dst[b + c] = src[c];
		c++;
	}
	if (b < s)
		dst[b + c] = '\0';
	return (b + a);
}
