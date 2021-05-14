/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:38:29 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 12:58:38 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int s)
{
	unsigned int	a;
	unsigned int	c;

	a = 0;
	c = 0;
	if (!dest || !src)
		return (0);
	if (s == 0)
		return (ft_strlen((char*)src));
	while (s > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--s;
		++c;
	}
	*dest = '\0';
	while (*src)
	{
		++src;
		++c;
	}
	return (c);
}
