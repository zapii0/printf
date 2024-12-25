/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:23:17 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/25 01:13:33 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	putx(char *x, int i)
{
	int	j;

	j = 0;
	if (i == -2147483648)
	{
		write(1, "-2147483648", 12);
		return (12);
	}
	if (i < 0)
	{
		j = write(1, '-', 1);
		i *= -1;
	}
	if (i >= 16)
	{
		j += putx(x, i / 16);
		i = i % 16;
	}
	j += write(1, &x[i], 1);
	return (j);
}

int	ft_puthex_p(int i, int c)
{
	char	*X;
	char	*x;
	int		j;

	j = 0;
	X = "0123456789ABCDEF";
	x = "0123456789abcdef";
	if (c == 'x')
		j = putx(x, i);
	else if (c == 'X')
		j = putx(X, i);
	return (j);
}
/*int	main()
{
	int i = 4456;
	char c = 'x';
	int	j = ft_puthex_p(i, (int)c);
	printf("liczba wypisanych""%d",j);
	return (0);
}*/
