/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:59:30 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/15 16:52:19 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	init_struct(struct x_list *params)
{
	params->minus = 0;
	params->dot = 0;
	params->zero_padding = 0;
	params->d_negative = 0;
	params->print_precision = 0;
	params->prec_and_len = 0;
	params->wid_and_len = 0;
	params->wid_and_prec = 0;
	params->d_min = 0;
	params->width = 0;
	params->precision = 0;
	params->format_len = 0;
	params->to_print = 0;
	params->format = 0;
}


int	print_precision;// BOOL
	int	minus;			// BOOL
	int dot;			// BOOL
	int	zero_padding;   // BOOL
	int d_negative;		// BOOL
	int	prec_and_len;	// BOOL
	int	wid_and_len;	// BOOL
	int wid_and_prec;	// BOOL
	int	d_min;			// BOOL
	int width;
	int precision;
	int	format_len;
	int to_print;
	int	return_size;
	char format;

void	find_format(struct x_list *params, va_list arg)
{
	if (params->format == 'd' || params->format == 'i')
		d_config(params, arg);
	else if (params->format == 'c')
		c_print(params, arg);
	else if (params->format == 's')
		s_config(params, arg);
	else if (params->format == 'p')
		p_print(params, arg);
	else if (params->format == 'u')
		u_print(params, arg);
	else if (params->format == 'x' || params->format == 'X')
		x_print(params, arg);
	else if (params->format == '%')
		percent_print(params);
}

void	print_parsing(char *parse, struct x_list *params, va_list arg)
{
	while (*parse)
	{
		while (*parse && *parse != '%')
		{
			ft_putchar_count(*parse, params);
			parse++;
		}
		if (*parse == '%')
		{
			init_struct(params);
			parse++;
			parsing(parse, params, arg);
			find_format(params, arg);
			parse = ft_strchr(parse, params->format) + 1;
		}
	}
}

int		ft_printf(char *format, ...)
{
	char			*parse;
	int				res;
	struct x_list	*params;
	va_list			arg;

	va_start(arg, format);
	params = malloc(sizeof(p_list));
	params->return_size = 0;
	parse = format;
	print_parsing(parse, params, arg);
	va_end(arg);
	res = params->return_size;
	free(params);
	return (res);
}
