/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:53:29 by gpiriou           #+#    #+#             */
/*   Updated: 2021/03/26 16:01:41 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void print_params(struct x_list *params)
{
	printf("\nPRINT PARAMS\n");
	printf("width:			%d\n", params->width);
	printf("precision:		%d\n", params->precision);
	printf("BOOL print precision:		%d\n", params->print_precision);
	printf("BOOL minus		%d\n", params->minus);
	printf("BOOL dot:		%d\n", params->dot);
	printf("BOOL zero_pad:	%d\n", params->zero_padding);
	printf("BOOL d_negative:	%d\n", params->d_negative);
	printf("len_format:			%d\n", params->len_format);
	printf("return_size:		%d\n", params->return_size);
	printf("format:			%c\n", params->format);
}

void	init_struct(struct x_list *params)
{
	params->width = 0;
	params->precision = 0;
	params->print_precision = 0;//BOOL
	params->minus = 0;			//BOOL
	params->dot = 0;			//BOOL
	params->zero_padding = 0;	//BOOL
	params->d_negative = 0;		//BOOL
	params->len_format = 0;
	params->format = '0';
}

void	print_wp(char c, int n, struct x_list *params)
{
	int i;

	i = 0;
	while (i++ < n)
		ft_putchar_count(c, params);
}

int		print_d(int d, struct x_list *params)
{
	if (params->zero_padding && (!params->print_precision && !params->dot))
	{
		if (d < 0)
		{
			d *= -1;
			ft_putchar_count('-', params);
		}
		print_wp('0', params->width, params);
	}
	else if (!params->minus)
		print_wp(' ', params->width, params);
	if (params->d_negative)
		ft_putchar_count('-', params);
	if (params->print_precision)
		print_wp('0', params->precision, params);
	if (((params->width && d != 0) || params->precision || d != 0))
		ft_putnbr_count(d, params);
	if (params->minus)
		print_wp(' ', params->width, params);
	return (1);
}

int		setup_d_precision(int *d, struct x_list *params)
{
//	printf("SETUP PRECISION\n");
	if (*d < 0)
	{
		params->d_negative = 1;
		*d *= -1;
	}
	params->len_format = ft_strlen(ft_itoa(*d));
	params->print_precision = 1;
	params->precision -= params->len_format;
	return (1);
}

int		setup_d_width(int d, struct x_list *params)
{
//	printf("SETUP WIDTH\n");
	if (params->width < 0)
	{
		params->minus = 1;
		params->width *= -1;
	}
	if (params->print_precision)
		params->width -= params->precision + params->len_format;
	else if (params->width && (!(params->width && d == 0)))
		params->width -= params->len_format;
	else if ((!params->print_precision && d == 0)
			&& (!(params->width && !params->precision && d == 0)))
		params->width -= 1;
	if (params->d_negative)
		params->width -= 1;
	return (1);
}


int		setup_d(struct x_list *params, va_list arg)
{
	int d;

	d = va_arg(arg, int);
	if (params->precision > 0)
		setup_d_precision(&d, params);
	else
		params->len_format = ft_strlen(ft_itoa(d));
	setup_d_width(d, params);
//	printf("WIDTH: %d\n", params->width);
	print_d(d, params);
	return (1);
}

//int	setup_c_width(struct x_list *params)
//{
//	
//}
//
//int	setup_c(struct x_list *params, va_list arg)
//{
//	char c;
//	
//	c = va_arg(arg, char);
//	if (!ft_isdigit(c))
//		return (0);
//	params->len_format = 1;
//	setup_c_width(params);
//	print_c(params);
//
//}

int		find_format(struct x_list *params, va_list arg)
{
	if (params->format == 'd')
		setup_d(params, arg);
//	else if (params->format == 'c')
//		setup_c(params, arg);
//	else if (params->format == 's')
//		setup_s(params, arg);
//	else if (params->format == 'u')
//		setup_u(params, arg);
//	else if (params->format == 'u')
//		setup_u(params, arg);
//	else if (params->format == 'p')
//		setup_p(params, arg);
//	else if (params->format == 'x')
//		setup_x(params, arg);
//	else if (params->format == 'X')
//		setup_X(params, arg);
//	else if (params->format == '%')
//	{
//		ft_putchar_fd('%', 1);
//		params->return_size++;
//	}
	else
		return (0);
	return (1);
}

int	is_valid_format(char *str, struct x_list *params)
{
//	printf("VALIDFORMAT:|%s|\n", str);
	if (*str == 'c'
			|| *str == 'd'
			|| *str == 'i'
			|| *str == 's'
			|| *str == 'u'
			|| *str == 'p'
			|| *str == 'x'
			|| *str == 'X')
	{
		params->format = *str;
		return (1);
	}
	else
	{
		printf("NOT VALID FORMAT\n");
		return (0);
	}
}

int	p_precision(char *str, struct x_list *params)
{
//	printf("PRECISION:|%s|\n", str);
	while (ft_isdigit(*++str));
	if (is_valid_format(str, params))
		return (1);
	return (0);
}

int	p_dot(char *str, struct x_list *params, va_list arg)
{
//	printf("DOT:|%s|\n", str);
	params->dot = 1;
	str++;
	if (*str == '*')
	{
		params->precision = va_arg(arg, int);
		p_precision(str, params);
	}
	else if (ft_isdigit(*str))
	{
		params->precision = ft_atoi(str);
		while (ft_isdigit(*++str));
		if (!is_valid_format(str, params))
			return (0);
	}
	else if (is_valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_width(char *str, struct x_list *params, va_list arg)
{
//	printf("WIDTH:|%s|\n", str);
	while (*str == '*')
	{
		str++;
		params->width = va_arg(arg, int);
	}
	if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);
		while (ft_isdigit(*(++str)));
	}
	if (params->width < 0)
		params->zero_padding = 0;
	if (*str == '.')
	{
		p_dot(str, params, arg);
	}
	else if (is_valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_minus(char *str, struct x_list *params, va_list arg)
{
//	printf("MINUS:|%s|\n", str);
	while (*str == '-' || *str == '0')
		str++;
	if (!params->minus)
	{
		params->minus = 1;
		params->zero_padding = 0;
	}
	if (ft_isdigit(*str) || *str == '*')
	{
		p_width(str, params, arg);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg);
	}
	else if (is_valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_zero_padding(char *str, struct x_list *params, va_list arg)
{
//	printf("ZERO_PAD:|%s|\n", str);
	while (*str == '0')
		str++;
	if (!params->minus)
		params->zero_padding = 1;
	if (*str == '*' || ft_isdigit(*str))
	{
		p_width(str, params, arg);
	}
	else if (*str == '-')
		p_minus(str, params, arg);
	else if (*str == '.')
		p_dot(str, params, arg);
	else if (is_valid_format(str, params));
	else
		return (0);	
	return (1);
}



int	parsing(char *str, struct x_list *params, va_list arg)
{
	if (*str == '%')
		params->format = '%';
	else if (*str == '0')
		p_zero_padding(str, params, arg);
	else if (*str == '-')
		p_minus(str, params, arg);
	else if (ft_isdigit(*str))
		p_width(str, params, arg);
	else if (*str == '*')
		p_width(str, params, arg);
	else if (*str == '.')
		p_dot(str, params, arg);
	else if (is_valid_format(str, params));
	else
		return (0);
	return (1);
}

int		ft_printf(char *format, ...)
{
	char *parse;
	struct x_list *params;
	va_list arg;

	va_start(arg, format);
	params = malloc(sizeof(p_list));
	init_struct(params);
	params->return_size = 0;
	parse = format;
//	printf("STR:|%s|\n", parse);
	while (*parse)
	{
		while (*parse && *parse != '%')
		{
			ft_putchar_count(*parse, params);
			parse++;
		}
		if (*parse == '%')
		{
			parse++;
			if (!parsing(parse, params, arg))
			{
				printf("ERROR\n");
				return (0);
			}
			else
			{
				find_format(params, arg);
				parse = ft_strchr(parse, params->format) + 1;
			}
		//	print_params(params);
			init_struct(params);
		}
	}
	return (params->return_size);
}
