/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:59:30 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 18:12:16 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	init_struct(struct s_struct *params)
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

void	find_format(struct s_struct *params, va_list arg)
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

void	print_parsing(char *parse, struct s_struct *params, va_list arg)
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
			if (params->format && ft_strchr(parse, params->format))
			{
				parse = ft_strchr(parse, params->format) + 1;
			}
		}
	}
}

int	ft_printf(const char *format, ...)
{
	char			*parse;
	int				res;
	struct s_struct	params;
	va_list			arg;

	va_start(arg, format);
	params.return_size = 0;
	parse = (char *)format;
	print_parsing(parse, &params, arg);
	va_end(arg);
	res = params.return_size;
	return (res);
}
