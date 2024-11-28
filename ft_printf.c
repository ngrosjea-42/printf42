/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:43:51 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/28 15:28:09 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

static int	ft_isformat(const char format, va_list typ)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += (ft_putchar(va_arg(typ, int)));
	else if (format == 's')
		i += (ft_putstr(va_arg(typ, char *)));
	else if (format == 'p')
		i += (ft_print0x(va_arg(typ, unsigned long int)));
	else if (format == 'd' || format == 'i')
		i += (ft_putnbrbase(va_arg(typ, int), BASE_10));
	else if (format == 'u')
		i += (ft_putnbrbase(va_arg(typ, unsigned int), BASE_10));
	else if (format == 'x')
		i += (ft_unsputnbrbase(va_arg(typ, unsigned int), LOW_16));
	else if (format == 'X')
		i += (ft_unsputnbrbase(va_arg(typ, unsigned int), UPP_16));
	else if (format == '%')
		i += (ft_putchar('%'));
	else
		i += write(1, &format, 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	va_list	ap;
	int		count;

	count = 0;
	i = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			count += ft_isformat(format[i], ap);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
