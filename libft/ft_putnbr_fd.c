/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:12:35 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 18:43:28 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a = (unsigned int)(n * -1);
	}
	else
		a = (unsigned int)n;
	if (a >= 10)
		ft_putnbr_fd(a / 10, fd);
	ft_putchar_fd((char)(a % 10 + 48), fd);
}
