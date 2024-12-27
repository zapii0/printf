/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:01:19 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/27 01:31:15 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdlib.h>

int	ft_nlen(unsigned int n)
{
	int	l;

	l = 0;
	if (n > 0)
	{
		n = n / 10;
		++l;
	}
	return (l);
}

char	*ft_utoa(unsigned int n)
{
	char *str;
	int	len;
	
	len = ft_nlen(n);
	str = malloc((sizeof len) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n > 0)
	{
		str[len - 1] = n % 10;
		n = n / 10;
		--len;
	}
	return (str);
}

int	ft_putUint(unsigned int n)
{
	int		i;
	char	*str;

	if (n == 0)
		i = ft_putchar(0);
	else
	{	
		str = ft_utoa(n);
		i = ft_putstr_p(str);
		free(str);
	}
	return (i);
}

