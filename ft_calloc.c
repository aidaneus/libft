/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:28:07 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/04 14:58:01 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*a;
	unsigned int	b;
	unsigned int	c;

	c = 0;
	b = count * size;
	if (!(a = malloc(b)))
		return (NULL);
	while (b--)
	{
		a[c] = 0;
		c++;
	}
	return (a);
}
