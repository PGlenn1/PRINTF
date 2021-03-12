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

int	valid_format(char *str, struct x_list *params)
{
	str++;
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

int	p_zero_padding(char *str, struct x_list *params, va_list arg, char *format)
{
	str++;
	if (*str == '*')
	{
		params->width = va_arg(arg, format);
		p_width(str, params, arg, format);
	}
	else if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);
		p_width(str, params, arg, format);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg, format);
	}
	else if (valid_format(str, params));
	else
		return (0);	
	return (1);
}

int	p_dot(char *str, struct x_list *params, va_list arg, char *format)
{
	str++;
	if (*str == '*')
	{
		params->precision = va_arg(arg, format);
		p_precision(str, params, arg, format);
	}
	else if (ft_isdigit(*str))
		params->precision = ft_atoi(str);
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_width(char *str, struct x_list *params, va_list arg, char *format)
{
	str++;
	if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg, format);
	}
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}

int	p_precison(char *str, struct x_list *params, va_list arg, char *format)
{
	str++;
	if (valid_format(str, params))
		return (1);
	return (0);
}

int	p_minus(char *str, struct x_list *params, va_list arg, char *format)
{
	str++;
	if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);
		p_width(str, params, arg, format);
	}
	else if (*str == '*')
	{
		params->width = va_arg(arg, format);
		p_width(str, params, arg, format);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg, format);
	}
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}


int	parsing(char *str, struct x_list *params, va_list arg, char *format)
{
	if (*str == '%')
		params->format = '%';
	else if (*str == '0')
	{
		params->zero_padding = 1;
		p_zero_padding(str, params, arg, format);
	}
	else if (*str == '-')
	{
		params->minus = 1;
		params->zero_padding = 0; // OR ERROR ??
		p_minus(str, params, arg, format);
	}
	else if (ft_isdigit(*str))
	{
		params->width = ft_atoi(str);	
		p_width(str, params, arg, format);
	}
	else if (*str == '*')
	{
		params->width = va_arg(arg, format);
		p_width(str, params, arg, format);
	}
	else if (*str == '.')
	{
		params->dot = 1;
		p_dot(str, params, arg, format);
	}
	else if (valid_format(str, params));
	else
		return (0);
	return (1);
}

void print_params(struct x_list *params)
{
	printf("%d\n", params->width);
	printf("%d\n", params->precision);
	printf("%d\n", params->minus);
	printf("%d\n", params->dot);
	printf("%d\n", params->zero_padding);
	printf("%d\n", params->return_size);
	printf("%c\n", params->format);
}

int		ft_printf(char *format, ...)
{
	char *parse;
	unsigned int n;
	struct x_list *params;
	va_list arg;

	va_start(arg, format);
	params = malloc(sizeof(p_list));
	init_struct(params);
	params->return_size = 0;
	parse = format;
	while (*parse)
	{
		while (*parse != '%')
		{
		//	ft_putchar_fd(*parse, 1);
		//	params->return_size += 1;
			parse++;
		}
		if (*parse == '%')
		{
			parse++;		
			if (!parsing(parse, params, arg, format))
				return (0);
		}
		parse++;
	}
}

int	main()
{
	char a;

	a = 20;
	ft_printf("Salut %d!", a);
}
