/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:27:24 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 13:10:30 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*c;

	a = 0;
	b = 0;
	c = (char*)malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (0);
	if (!c)
		return (NULL);
	while (s[a])
	{
		if (a >= start && b < len)
		{
			c[b] = s[a];
			b++;
		}
		a++;
	}
	c[b] = 0;
	return (c);
}
