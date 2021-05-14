/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:43:57 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/10 17:52:58 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	unsigned int	b;
	size_t			a;

	a = 0;
	if (!*n)
		return ((char*)h);
	while (h[a] != '\0' && a < l)
	{
		if (h[a] == n[0])
		{
			b = 1;
			while (n[b] != '\0' && h[a + b] == n[b] && (size_t)(a + b) < l)
				b++;
			if (n[b] == '\0')
				return ((char*)&h[a]);
		}
		a++;
	}
	return (0);
}
