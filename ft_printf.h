/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:17:17 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/26 17:22:40 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BASE_10 "0123456789"
# define UPP_16 "0123456789ABCDEF"
# define LOW_16 "0123456789abcdef"

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbrbase(long long int nb, char *base);
int	ft_putstr(char *str);
int	ft_printf(const char *format, ...);
int	ft_print0x(unsigned long int n);
int	ft_unsputnbrbase(unsigned long int nb, char *base);

#endif