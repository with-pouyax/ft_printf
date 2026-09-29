/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pghajard <pghajard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:53:09 by pghajard          #+#    #+#             */
/*   Updated: 2024/05/06 10:27:58 by pghajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recursive_print(unsigned long n, const char *base)
{
	int	length;

	length = 0;
	if (n >= ft_strlen(base))
		length = recursive_print(n / ft_strlen(base), base);
	length += ft_putchar_fd((base[n % ft_strlen(base)]), 1);
	return (length);
}

int	ft_putpointer(void *adress)
{
	unsigned long	n;
	const char		*base;
	int				length;

	length = 0;
	if (adress == NULL)
	{
		length += ft_putstr_fd("(nil)", 1);
	}
	else
	{
		n = (unsigned long)adress;
		base = "0123456789abcdef";
		length = ft_putstr_fd("0x", 1);
		length += recursive_print(n, base);
	}
	return (length);
}
