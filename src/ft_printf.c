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
	printf("params->prec_and_len: %d\n", params->prec_and_len);
	printf("params->wid_and_len: %d\n", params->wid_and_len);
	printf("format_len:			%d\n", params->format_len);
	printf("return_size:		%d\n", params->return_size);
	printf("format:			%c\n", params->format);
	printf("\n");
}

void	init_struct(struct x_list *params)
{
	params->print_precision = 0;//BOOL
	params->minus = 0;			//BOOL
	params->dot = 0;			//BOOL
	params->zero_padding = 0;	//BOOL
	params->d_negative = 0;		//BOOL
	params->prec_and_len = 0;		//BOOL
	params->wid_and_len = 0;		//BOOL
	params->width = 0;
	params->precision = 0;
	params->format_len = 0;
	params->format = 0;
}

void		find_format(struct x_list *params, va_list arg)
{
//	printf("FIND FORMAT\n");
	if (params->format == 'd' || params->format == 'i')
		d_config(params, arg);
	else if (params->format == 'c')
		c_print(params, arg);
	else if (params->format == 's')
		s_config(params, arg);
	else if (params->format == 'p')
		p_print(params, arg);
//	else if (params->format == 'u')
//		setuparse_u(params, arg);
//	else if (params->format == 'x')
//		setuparse_x(params, arg);
//	else if (params->format == 'X')
//		setuparse_X(params, arg);
//	else if (params->format == '%')
//	{
//		ft_putchar_fd('%', 1);
//		params->return_size++;
//	}
	else
		printf("ERROR\n");
}

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

void		print_parsing(char *parse, struct x_list *params, va_list arg)
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
			parse++;
			parsing(parse, params, arg);
			find_format(params, arg);
			parse = ft_strchr(parse, params->format) + 1;
			init_struct(params);
		}
	}
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
	print_parsing(parse, params, arg);
	va_end(arg);
	return (params->return_size);
}
