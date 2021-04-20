/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:50:53 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/15 16:50:54 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	is_valid_format(char *str, struct x_list *params)
{
	if (*str == 'c'
		|| *str == 'd'
		|| *str == 'i'
		|| *str == 's'
		|| *str == 'u'
		|| *str == 'p'
		|| *str == 'x'
		|| *str == 'X'
		|| *str == '%')
	{
		params->format = *str;
		return (1);
	}
	return (0);
}