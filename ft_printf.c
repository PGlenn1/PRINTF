#include <stdarg.h>
#include "../../Cercle0/libft_upgraded/libft.h"

typedef struct x_list {
	int width;
	int precision;
	int	minus;			// BOOL
	int dot;			// BOOL
	int	zero_padding;   // BOOL
	int	return_size;
	char format;
} p_list;

void	init_struct(struct x_list *params)
{
	params->width = 0;
	params->precision = 0;
	params->minus = 0;
	params->dot = 0;
	params->zero_padding = 0;
	params->format = '0';
}

int		find_format(struct x_list *params, va_list arg)
{
	if (params->format == 'd')
		print_d(params, arg);
	else if (params->format == 'c')
		print_c(params, arg);
	else if (params->format == 's')
		print_s(params, arg);
	else if (params->format == 'u')
		print_u(params, arg);
	else if (params->format == 'p')
		print_p(params, arg);
	else if (params->format == 'x')
		print_x(params, arg);
	else if (params->format == 'X')
		print_X(params, arg);
	else if (params->format == '%')
		ft_putchar_fd('%', 1);
	else
		return (0);
	return (1);
}

int		print_d(struct x_list *params, va_list arg)
{
	int n;
	char padding;

	n = va_arg(arg, int);
	padding = ' ';
	if (params->minus == 1 && params->zero_padding == 1)
			return (0);
	else if (params->zero_padding == 1)
		padding = '0';
	

}

int	valid_format(char *str, struct x_list *params)
{
	//printf("VALIDFORMAT:|%s|\n", str);
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
	printf("PRECISION:|%s|\n", str);
	while (ft_isdigit(*++str));
	if (valid_format(str, params))
		return (1);
	return (0);
}

int	p_dot(char *str, struct x_list *params, va_list arg)
{
	printf("DOT:|%s|\n", str);
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
	printf("WIDTH:|%s|\n", str);
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
	printf("ZERO_PAD:|%s|\n", str);
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
	printf("MINUS:|%s|\n", str);
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
		//params->zero_padding = 0; // OR ERROR ??
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

void print_params(struct x_list *params)
{
	printf("\nPRINT PARAMS\n");
	printf("width:			%d\n", params->width);
	printf("precision:		%d\n", params->precision);
	printf("BOOL minus		%d\n", params->minus);
	printf("BOOL dot:		%d\n", params->dot);
	printf("BOOL zero_pad:	%d\n", params->zero_padding);
	printf("return_size:	%d\n", params->return_size);
	printf("format:			%c\n", params->format);
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
			ft_putchar_fd(*parse, 1);
			params->return_size += 1;
			parse++;
		}
		if (*parse == '%')
		{
			parse++;
			if (!parsing(parse, params, arg))
				return (0);
	//		print_params(params);
		}
	}
	return (1);
}

int	main()
{
	int a;
	int b;

	a = 20;
	b = 30;
	ft_printf("Salut %0-d!", a, b);
}
