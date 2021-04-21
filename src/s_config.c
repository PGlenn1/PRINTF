/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_config.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:52:55 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/21 14:57:25 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	s_print(char *str, struct s_struct params)
{
	int i;

	i = params.width - params.format_len;
	while (!params.minus && (i-- > 0))
	{
		ft_putchar_count(' ', params);
	}
	i = params.format_len;
	while (i-- > 0)
		ft_putchar_count(*(str++), params);
	i = params.width - params.format_len;
	while (params.minus && (i-- > 0))
		ft_putchar_count(' ', params);
}

void	s_config(struct s_struct params, va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(null)";
		params.format_len = 6;
	}
	else
		params.format_len = ft_strlen(str);
	if ((params.precision < params.format_len
			&& params.precision > 0)
		|| (params.dot && params.precision == 0))
		params.format_len = params.precision;
	s_print(str, params);
}
