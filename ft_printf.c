#include <stdarg.h>
#include "../../Cercle0/libft_upgraded/libft.h"

typedef struct x_list {
	int width;
	int precision;
	int	larger_width;	// BOOL
	int	minus;			// BOOL
	int dot;			// BOOL
	int	zero_padding;   // BOOL
	int	d_zero;			// BOOL
	int d_negative;		// BOOL
	int	return_size;
	char format;
} p_list;

void print_params(struct x_list *params)
{
	printf("\nPRINT PARAMS\n");
	printf("width:			%d\n", params->width);
	printf("precision:		%d\n", params->precision);
	printf("larger_width:	%d\n", params->larger_width);
	printf("BOOL minus		%d\n", params->minus);
	printf("BOOL dot:		%d\n", params->dot);
	printf("BOOL zero_pad:	%d\n", params->zero_padding);
	printf("BOOL d_zero:	%d\n", params->d_zero);
	printf("BOOL d_negative:	%d\n", params->d_negative);
	printf("return_size:	%d\n", params->return_size);
	printf("format:			%c\n", params->format);
}

void	print_width(int n, char c, struct x_list *params)
{
	while (n > 0)
	{
		ft_putchar_fd(c, 1);
		params->return_size += 1;
		n--;
	}
}

void	init_struct(struct x_list *params)
{
	params->width = 0;
	params->precision = 0;
	params->larger_width = 0;	//BOOL
	params->minus = 0;			//BOOL
	params->dot = 0;			//BOOL
	params->zero_padding = 0;	//BOOL
	params->d_zero = 0;			//BOOL
	params->d_negative = 0;		//BOOL
	params->format = '0';
}

void	print_wp(char c, int n, int return_size)
{
	int i;

	i = 0;
	while (i++ < n)
	{
		ft_putchar_fd(c, 1);
		return_size++;
	}
}

int		print_d(int d, char padding, struct x_list *params)
{
	if (params->d_negative && params->precision < 0)
	{
		ft_putchar_fd('-', 1);
		params->return_size++;
	}
	if ((!params->minus && params->larger_width) || !params->dot)
	{
		if (params->d_negative)
			params->width -= 1;
		print_wp(padding, params->width, params->return_size);
	}
	if (params->d_negative && params->precision > 0)
	{
		ft_putchar_fd('-', 1);
		params->return_size++;
	}
	print_wp('0', params->precision, params->return_size);
	if (!params->d_zero || params->precision > 0)
		ft_putnbr_fd(d, 1);
	if (params->minus && params->larger_width)
	{
		if (params->d_negative)
			params->width -= 1;
		print_wp(padding, params->width, params->return_size);
	}
	printf("\n"); ////////
	return (1);
}

int		setup_d(struct x_list *params, va_list arg)
{
	int d;
	int len_d;
	char padding;

	padding = ' ';
	if (params->zero_padding && !params->dot)
		padding = '0';
	d = va_arg(arg, int);
	if (params->width < 0)
	{
		params->minus = 1;
		params->width *= -1;
	}
	if (d == 0)
		params->d_zero = 1;
	if (d < 0 && params->precision > 0)
	{
		d *= -1;
		params->d_negative = 1;
	}
	len_d = ft_strlen(ft_itoa(d));
	if (params->width > params->precision && params->dot)
	{
		params->larger_width = 1;
		if (params->precision > 0)
			params->width -= params->precision;
		else
			params->width -= len_d;
		params->precision -= len_d;
	}
	else if (params->dot)
		params->precision -= len_d;
	else
		params->width -= len_d;

//	printf("\nAFTER:");
//	print_params(params); // params after setup

	print_d(d, padding, params);
	return (1);
}

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

int	valid_format(char *str, struct x_list *params)
{
//	printf("VALIDFORMAT:|%s|\n", str);
	if (*str == 'd'
			|| *str == 'c'
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
		return (0);
}

int	p_precision(char *str, struct x_list *params)
{
//	printf("PRECISION:|%s|\n", str);
	while (ft_isdigit(*++str));
	if (valid_format(str, params))
		return (1);
	return (0);
}

int	p_dot(char *str, struct x_list *params, va_list arg)
{
//	printf("DOT:|%s|\n", str);
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
		if (!valid_format(str, params))
			return (0);
	}
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_width(char *str, struct x_list *params, va_list arg)
{
//	printf("WIDTH:|%s|\n", str);
	while (ft_isdigit(*++str));
	if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg);
	}
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_zero_padding(char *str, struct x_list *params, va_list arg)
{
//	printf("ZERO_PAD:|%s|\n", str);
	str++;
	if (*str == '*')
	{
		params->width = va_arg(arg, int);
		p_width(str, params, arg);
	}
	else if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);
		p_width(str, params, arg);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg);
	}
	else if (valid_format(str, params));
	else
		return (0);	
	return (1);
}

int	p_minus(char *str, struct x_list *params, va_list arg)
{
//	printf("MINUS:|%s|\n", str);
	str++;
	if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);
		p_width(str, params, arg);
	}
	else if (*str == '*')
	{
		params->width = va_arg(arg, int);
		p_width(str, params, arg);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg);
	}
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}


int	parsing(char *str, struct x_list *params, va_list arg)
{
	if (*str == '%')
		params->format = '%';
	else if (*str == '0')
	{
		params->zero_padding = 1;
		p_zero_padding(str, params, arg);
	}
	else if (*str == '-')
	{
		params->minus = 1;
		p_minus(str, params, arg);
	}
	else if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);	
		p_width(str, params, arg);
	}
	else if (*str == '*')
	{
		params->width = va_arg(arg, int);
		p_width(str, params, arg);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg);
	}
	else if (valid_format(str, params));
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
	while (*parse)
	{
		while (*parse && *parse != '%')
		{
	//		ft_putchar_fd(*parse, 1);
	//		params->return_size += 1;
			parse++;
		}
		if (*parse == '%')
		{
			parse++;
			if (!parsing(parse, params, arg))
				return (0);
//			print_params(params);
			setup_d(params, arg);
		}
	}
//	printf("return_size: %d\n", params->return_size);
	return (1);
}

int	main()
{
	int a;
	int b;
	int c;

	a = -20;
	b = -0;
	c = -0;
	char *s = "%-*.*d\n";
	ft_printf(s, a, b, c);
//	printf("printf:");
	   printf(s, a, b, c);
}
