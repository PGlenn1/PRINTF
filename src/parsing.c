/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:33:39 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/15 16:39:21 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	parse_dot(char *str, struct x_list *params, va_list arg)
{
	params->dot = 1;
	str++;
	if (*str == '*')
	{
		params->precision = va_arg(arg, int);
		str++;
		while (ft_isdigit(*str))
			str++;
		is_valid_format(str, params);
	}
	else if (ft_isdigit(*str))
	{
		params->precision = ft_atoi(str);
		str++;
		while (ft_isdigit(*str))
			str++;
		is_valid_format(str, params);
	}
	else
		is_valid_format(str, params);
}

void	parse_width(char *str, struct x_list *params, va_list arg)
{
	while (*str == '*')
	{
		str++;
		params->width = va_arg(arg, int);
	}
	if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);
		while (ft_isdigit(*str))
			str++;
	}
	if (params->width < 0)
	{
		params->zero_padding = 0;
		params->minus = 1;
		params->width *= -1;
	}
	if (*str == '.')
		parse_dot(str, params, arg);
	else
		is_valid_format(str, params);
}

void	parse_minus(char *str, struct x_list *params, va_list arg)
{
	while (*str == '-' || *str == '0')
		str++;
	if (!params->minus)
	{
		params->minus = 1;
		params->zero_padding = 0;
	}
	if (ft_isdigit(*str) || *str == '*')
		parse_width(str, params, arg);
	else if (*str == '.')
	{
		params->dot = 1;
		parse_dot(str, params, arg);
	}
	else
		is_valid_format(str, params);
}

void	parse_zero_padding(char *str, struct x_list *params, va_list arg)
{
	while (*str == '0')
		str++;
	if (!params->minus)
		params->zero_padding = 1;
	if (*str == '*' || ft_isdigit(*str))
		parse_width(str, params, arg);
	else if (*str == '-')
		parse_minus(str, params, arg);
	else if (*str == '.')
		parse_dot(str, params, arg);
	else
		is_valid_format(str, params);
}

void	parsing(char *str, struct x_list *params, va_list arg)
{
	if (*str == '%')
		params->format = '%';
	else if (*str == '0')
		parse_zero_padding(str, params, arg);
	else if (*str == '-')
		parse_minus(str, params, arg);
	else if (ft_isdigit(*str))
		parse_width(str, params, arg);
	else if (*str == '*')
		parse_width(str, params, arg);
	else if (*str == '.')
		parse_dot(str, params, arg);
	else
		is_valid_format(str, params);
}