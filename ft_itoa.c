/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:38:11 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/06 19:51:24 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		check(unsigned int n)
{
	unsigned int	a;

	a = 1;
	while (n >= 10)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char			*ft_itoa(int n)
{
	char			*a;
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	d = 0;
	c = (n < 0 ? -n : n);
	b = check(c);
	if (!(a = (char *)malloc(sizeof(char) * b + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n < 0)
	{
		a[d] = '-';
		b++;
	}
	d = b - 1;
	while (c >= 10)
	{
		a[d] = c % 10 + 48;
		c /= 10;
		d--;
	}
	a[d] = c % 10 + 48;
	a[b] = '\0';
	return (a);
}
