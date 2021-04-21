/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_config.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:13:29 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/21 14:54:02 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	d_print_flag(char c, char flag, struct s_struct params)
{
	int i;
	int to_print;

	to_print = 0;
	if (flag == '1')
	{
		if (params.print_precision)
			flag = 'B';
		else
			flag = 'A';
	}
	if (flag == 'A')
		to_print = params.width - params.format_len;
	else if (flag == 'B')
		to_print = params.width - params.precision;
	else if (flag == 'C')
		to_print = params.precision - params.format_len;
	i = 0;
	while (i++ < to_print)
		ft_putchar_count(c, params);
}

int		d_specific_cases(int d, struct s_struct params)
{
	if (d == -2147483648)
	{
		params.d_min = 1;
		ft_putnbr_count(d, params);
		return (1);
	}
	else if (d == 0 && params.dot)
	{
		if (!params.precision)
		{
			if (!params.width)
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

void	d_print(int d, struct s_struct params)
{
	if (params.zero_padding && params.wid_and_len
		&& (params.precision < 0 || !params.dot))
	{
		if (params.d_negative && !params.d_min)
			ft_putchar_count('-', params);
		d_print_flag('0', 'A', params);
	}
	else if (!params.minus && params.wid_and_len && params.wid_and_prec)
		d_print_flag(' ', '1', params);
	if (params.print_precision && params.prec_and_len)
	{
		if (params.d_negative && !params.d_min)
			ft_putchar_count('-', params);
		d_print_flag('0', 'C', params);
	}
	if (!d_specific_cases(d, params))
	{
		if (params.d_negative && !params.zero_padding
			&& !params.print_precision && !params.d_min)
			ft_putchar_count('-', params);
		ft_putnbr_count(d, params);
	}
	if (params.minus && params.wid_and_len && params.wid_and_prec)
		d_print_flag(' ', '1', params);
}

int		d_config_wp(struct s_struct params, va_list arg)
{
	int		d;
	char	*temp;

	d = va_arg(arg, int);
	temp = ft_itoa(d);
	params.format_len = ft_strlen(temp);
	free(temp);
	if (d < 0 && !(d == -2147483648))
	{
		d *= -1;
		params.d_negative = 1;
		if (params.precision >= 0)
			params.precision += 1;
	}
	if (params.precision > params.format_len)
		params.prec_and_len = 1;
	if (params.width > params.format_len)
		params.wid_and_len = 1;
	if (params.width > params.precision)
		params.wid_and_prec = 1;
	return (d);
}

void	d_config(struct s_struct params, va_list arg)
{
	int d;

	d = d_config_wp(params, arg);
	if (params.dot && params.precision >= 0)
	{
		params.zero_padding = 0;
		if (params.prec_and_len)
			params.print_precision = 1;
	}
	if (!params.wid_and_len)
		params.zero_padding = 0;
	d_print(d, params);
}
