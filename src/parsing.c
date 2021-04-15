#include "../includes/ft_printf.h"

void	is_valid_format(char *str, struct x_list *params)
{
//	printf("ISVALID?:|%s|\n", str);
	if (*str == 'c'
		|| *str == 'd'
		|| *str == 'i'
		|| *str == 's'
		|| *str == 'u'
		|| *str == 'p'
		|| *str == 'x'
		|| *str == 'X')
	{
//		printf("VALID FORMAT:|%s|\n", str);
		params->format = *str;
	}
	else
		printf("NOT VALID FORMAT\n");
}

void	parse_precision(char *str, struct x_list *params)
{
//	printf("PRECISION:|%s|\n", str);
	while (ft_isdigit(*++str));
	is_valid_format(str, params);
}

void	parse_dot(char *str, struct x_list *params, va_list arg)
{
	//printf("DOT:|%s|\n", str);
	params->dot = 1;
	str++;
	if (*str == '*')
	{
		params->precision = va_arg(arg, int);
		parse_precision(str, params);
	}
	else if (ft_isdigit(*str))
	{
		params->precision = ft_atoi(str);
		while (ft_isdigit(*(++str)));
		is_valid_format(str, params);
	}
	else
		is_valid_format(str, params);
}

void	parse_width(char *str, struct x_list *params, va_list arg)
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
//	printf("MINUS:|%s|\n", str);
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
//	printf("ZERO_PAD:|%s|\n", str);
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