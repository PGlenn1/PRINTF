/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:47:33 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/21 14:59:52 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	percent_print_flag(char c, int to_print, struct s_struct *params)
{
	int i;

	i = 0;
	while (i < to_print)
	{
		ft_putchar_count(c, params);
		i++;
	}
}

int		percent_specific_cases(struct s_struct *params)
{
	if (params->dot)
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

void	percent_print(struct s_struct *params)
{
	params->format_len = 1;
	params->to_print = params->width - params->format_len;
	if (!params->minus && params->width > params->format_len)
	{
		if (params->zero_padding)
			percent_print_flag('0', params->to_print, params);
		else
			percent_print_flag(' ', params->to_print, params);
	}
	ft_putchar_count('%', params);
	if (params->minus && params->width > params->format_len)
		percent_print_flag(' ', params->to_print, params);
}
