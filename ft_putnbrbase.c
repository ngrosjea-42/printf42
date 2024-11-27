/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:45:44 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/26 17:14:07 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static unsigned long int	ft_strlen(char *str)
{
	unsigned long int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbrbase(long long int nb, char *base)
{
	int	baselen;
	int	i;

	i = 1;
	baselen = ft_strlen(base);
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= baselen)
		i += ft_putnbrbase(nb / baselen, base);
	ft_putchar(base[nb % baselen]);
	return (i);
}
