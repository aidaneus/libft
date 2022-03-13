/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:36:53 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/04 13:36:56 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)buf1;
	b = (unsigned char*)buf2;
	if (buf1 == buf2 || count == 0)
		return (0);
	while (count--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}
