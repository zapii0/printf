/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 22:19:16 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/27 05:14:54 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	Cformat(char *format, va_list va)
{
	int	i;

	i = 0;
	if (format == 'c')
		i = ft_putchar_p(va_arg(va, int));
	else if (format == 's')
		i = ft_putstr_p(va_arg(va, char *));
	else if (format == 'p')
		
	else if (format == 'd')
		i = ft_putdigit_p(va_arg(va, char *), 0);
	else if (format == 'i')
		i = ft_putdigit_p(va_arg(va, char *), 0);
	else if (format == 'u')
		i = ft_putUint_p(va_arg(va, int));
	else if (format == 'x')
		i = ft_puthex_p(va_arg(va, int), 'x');
	else if (format == 'X')
		i = ft_puthex_p((va_arg(va, int)), 'X');
	else if (format == '%')
		i = write(1, '%', 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	va;
	size_t	i;
	
	if (!format)
		return (0);
	va_start(va, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i += Cformat(*++format, va);
		}
		else
			i += write(1, format, 1);
		++format;
	}
	va_end(va);
	return (i);
}
