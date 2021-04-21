/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count_ui.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:44:48 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/21 14:55:48 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_count_ui(unsigned int n, struct s_struct *params)
{
	if (n >= 0 && n <= 9)
		ft_putchar_count(n + '0', params);
	else
	{
		ft_putnbr_count_ui(n / 10, params);
		ft_putchar_count((n % 10) + '0', params);
	}
}
