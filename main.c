/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:12:01 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/26 17:19:31 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>
#include <stdio.h>

int	main(void)
{
	printf("     %d\n", ft_printf("%%%%"));
	printf("     %d", printf("%%%%"));
	return (0);
}
