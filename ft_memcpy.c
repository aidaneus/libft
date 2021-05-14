/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:06:25 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/03 18:11:30 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)destination;
	b = (unsigned char *)source;
	if (!n || destination == source)
		return (destination);
	while (n--)
		*a++ = *b++;
	return (destination);
}
