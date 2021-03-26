/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:40:25 by gpiriou           #+#    #+#             */
/*   Updated: 2021/03/23 17:26:02 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_count(int n, struct x_list *params)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		params->return_size += 11;
	}
	else
	{
		if (n >= 0 && n <= 9)
			ft_putchar_count(n + '0', params);
		else if (n < 0)
		{
			ft_putchar_count('-', params);
			n = n * -1;
			ft_putnbr_count(n, params);
		}
		else
		{
			ft_putnbr_count(n / 10, params);
			ft_putchar_count((n % 10) + '0', params);
		}
	}
}
