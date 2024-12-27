/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 22:33:52 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/27 01:33:09 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putstr_p(char *str);
int		ft_putchar_p(int c);
int		ft_putdigit_p(int nb, int i);
int		ft_puthex_p(int i, int c);
char	*ft_putUint_p(unsigned int n);
# endif