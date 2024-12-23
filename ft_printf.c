/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 22:19:16 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/23 02:52:04 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	Cformat(char *format, va_list va)
{
	int	i;

	i = 0;
	if (format == 'c')

	else if (format == 's')
	
	else if (format == 'p')
	
	else if (format == 'd')
	
	else if (format == 'i')
	
	else if (format == 'u')
	
	else if (format == 'x')

	else if (format == 'X')

	else if (format == '%')

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
