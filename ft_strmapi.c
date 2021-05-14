/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:34:31 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/10 13:40:34 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*b;

	a = 0;
	if (!s || !f)
		return (NULL);
	if (!(b = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1)))
		return (NULL);
	while (a < ft_strlen((char*)s))
	{
		b[a] = f(a, s[a]);
		a++;
	}
	b[a] = '\0';
	return (b);
}
