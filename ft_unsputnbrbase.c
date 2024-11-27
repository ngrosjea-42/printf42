/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbrbase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:43:55 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/26 17:19:57 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static unsigned int	ft_strlen(char *str)
{
	unsigned long int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_unsputnbrbase(unsigned long int nb, char *base)
{
	unsigned long int	baselen;
	unsigned long int	i;

	i = 1;
	baselen = ft_strlen(base);
	if (nb >= baselen)
		i += ft_unsputnbrbase(nb / baselen, base);
	ft_putchar(base[nb % baselen]);
	return (i);
}
