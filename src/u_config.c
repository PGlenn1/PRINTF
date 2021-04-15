/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_config.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:53:04 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/15 15:54:31 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			u_print_flag(char c, int to_print, struct x_list *params)
{
	int i;

	i = 0;
	while (i < to_print)
	{
		ft_putchar_count(c, params);
		i++;
	}
}

int				u_specific_cases(unsigned int u, struct x_list *params)
{
	if (u == 0 && params->dot)
	{
		if (!params->precision)
		{
			if (!params->width)
				write(1, "", 0);
			else
				ft_putchar_count(' ', params);
		}
		else
			ft_putchar_count('0', params);
		return (1);
	}
	return (0);
}

unsigned int	u_config(struct x_list *params, va_list arg)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);
	params->format_len = ft_len_n_ui(n);
	if (params->precision > params->format_len)
	{
		params->print_precision = 1;
		params->to_print = params->width - params->precision;
	}
	else
		params->to_print = params->width - params->format_len;
	if (params->dot && params->precision >= 0)
		params->zero_padding = 0;
	return (n);
}

void			u_print(struct x_list *params, va_list arg)
{
	unsigned int u;

	u = u_config(params, arg);
	if (!params->minus && params->width > params->format_len)
	{
		if (params->zero_padding)
			u_print_flag('0', params->to_print, params);
		else
			u_print_flag(' ', params->to_print, params);
	}
	if (params->print_precision)
	{
		u_print_flag('0', params->precision - params->format_len, params);
	}
	if (!u_specific_cases(u, params))
		ft_putnbr_count_ui(u, params);
	if (params->minus && params->width > params->precision)
		u_print_flag(' ', params->to_print, params);
}
