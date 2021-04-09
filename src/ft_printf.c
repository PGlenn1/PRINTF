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
	params->format = '0';
}

void	d_print_flag(char c, char flag, struct x_list *params)
{
	int i;
	int to_print;

	to_print = 0;
	if (flag == '1')
	{
		if (params->print_precision)
			flag = 'B';
		else
			flag = 'A';
	}
	if (flag == 'A')
		to_print = params->width - params->format_len;
	else if (flag == 'B')
		to_print = params->width - params->precision;
	else if (flag == 'C')
		to_print = params->precision - params->format_len;
	i = 0;
	while (i++ < to_print)
		ft_putchar_count(c, params);
}

int		d_specific_cases(int d, struct x_list *params)
{
	if (d == 0 && params->dot)
	{
		if (!params->width && !params->precision)
			write(1, "", 0);
		else if (!params->precision)
			ft_putchar_count(' ', params);
		else
			ft_putchar_count('0', params);
		return (1);
	}
	return (0);
}

void	d_print(int d, struct x_list *params)
{
	if (params->zero_padding && params->wid_and_len
		&& (params->precision < 0 || !params->dot))
	{
		if (params->d_negative)
			ft_putchar_count('-', params);
		d_print_flag('0', 'A' , params);
	}
	else if (!params->minus && params->wid_and_len && params->wid_and_prec)
		d_print_flag(' ', '1', params);
	if (params->print_precision && params->prec_and_len)
	{
		if (params->d_negative)
			ft_putchar_count('-', params);
		d_print_flag('0', 'C', params);
	}
	if (!d_specific_cases(d, params))
	{
		if (params->d_negative && !params->zero_padding && !params->print_precision)
			ft_putchar_count('-', params);
		ft_putnbr_count(d, params);
	}
	if (params->minus && params->wid_and_len && params->wid_and_prec)
		d_print_flag(' ', '1', params);
}

int	d_config_wp(struct x_list *params, va_list arg)
{
	int d;
	char *temp;

	d = va_arg(arg, int);
	temp = ft_itoa(d);
	params->format_len = ft_strlen(temp);
	free(temp);
	if (d < 0)
	{
		d *= -1;
		params->d_negative = 1;
		if (params->precision >= 0)
			params->precision += 1;
	}
	if (params->precision > params->format_len)
		params->prec_and_len = 1;
	if (params->width > params->format_len)
		params->wid_and_len = 1;
	if (params->width > params->precision)
		params->wid_and_prec = 1;
	return (d);
}

void		d_setup(struct x_list *params, va_list arg)
{
	int d;

	d = d_config_wp(params, arg);
	if (params->dot && params->precision >= 0)
	{
		params->zero_padding = 0;
		if (params->prec_and_len)
			params->print_precision = 1;
		else
			params->print_precision = 0;
	}
	if (!params->wid_and_len)
		params->zero_padding = 0;
	d_print(d, params);
}

//int	setup_c_width(struct x_list *params)
//{
//	
//
//
//int	setup_c(struct x_list *params, va_list arg)
//{
//	char c;
//	
//	c = va_arg(arg, char);
//	if (!ft_isdigit(c))
//		return (0);
//	params->format_len = 1;
//	setup_c_width(params);
//	print_c(params);
//
//}

int		find_format(struct x_list *params, va_list arg)
{
	if (params->format == 'd')
		d_setup(params, arg);
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
		while (ft_isdigit(*(++str)));
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
	{
		params->zero_padding = 0;
		params->minus = 1;
		params->width *= -1;
	}
	if (*str == '.')
		p_dot(str, params, arg);
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
	{
		params->zero_padding = 1;
	}
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

int		print_parsing(char *parse, struct x_list *params, va_list arg)
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
			if (!parsing(parse, params, arg))
				return (0);
			else
			{
				find_format(params, arg);
				parse = ft_strchr(parse, params->format) + 1;
			}
			init_struct(params);
		}
	}
	return (1);
}

int		ft_printf(char *format, ...)
{
	char *parse;
	struct x_list params;
	va_list arg;

	va_start(arg, format);
	params = malloc(sizeof(p_list));
	init_struct(params);
	params->return_size = 0;
	parse = format;
	if (!print_parsing(parse, params, arg))
		return (0);
	va_end(arg);
	return (params->return_size);
}
