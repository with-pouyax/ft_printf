/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pghajard <pghajard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:29:24 by pghajard          #+#    #+#             */
/*   Updated: 2024/05/02 13:37:29 by pghajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr_base(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar_fd(symbols[n], 1));
	else
	{
		count = ft_putnbr_base(n / base, base);
		return (count + ft_putnbr_base(n % base, base));
	}
}
