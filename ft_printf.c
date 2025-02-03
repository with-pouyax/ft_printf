/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pghajard <pghajard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:00:35 by pghajard          #+#    #+#             */
/*   Updated: 2024/05/02 17:36:34 by pghajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = ft_putchar_fd(va_arg(ap, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base(va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), 10);
	else if (specifier == 'x')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += ft_putnbr_base_upper((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'p')
		count += ft_putpointer(va_arg(ap, void *));
	else if (specifier == '%')
		count += write(1, &specifier, 1);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, ap);
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(ap);
	return (count);
}
