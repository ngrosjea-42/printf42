/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print0x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:24:02 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/26 17:19:13 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print0x(unsigned long int n)
{
	if (n == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + ft_unsputnbrbase(n, LOW_16));
}
