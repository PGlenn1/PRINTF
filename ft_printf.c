#include <stdarg.h>
#include "../../Cercle0/libft_upgraded/libft.h"

typedef struct x_list {
	int width;
	int precision;
	int	padding; 
	int	minus;			// BOOL
	int dot;			// BOOL
	int asterisk;		// BOOL
	int	zero_padding;
	int	return_size;
	char format;
} p_list;

void	init_struct(struct x_list *params)
{
	params->width = 0;
	params->precision = 0;
	params->padding = 0;
	params->minus = 0;
	params->dot = 0;
	params->asterisk = 0;
	params->zero_padding = 0;
	params->format = '0';
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
			ft_putchar_fd(*parse, 1);
			parse++;
		}
		if (*parse == '%')
		{
			parse++;		
			if (!first_parsing(parse, params))
				return (0);
		}
		parse++;
	}
}

int	valid_format(char *str, struct x_list *params)
{
	if (*str == 'd'
			|| *str == 'c'
			|| *str == 's'
			|| *str == 'u'
			|| *str == 'p'
			|| *str == 'x'
			|| *str == 'X')
	{
		params->format = *str;
		return (1)
	}
	else
		return (0);
}

void	parsing(char *str, struct x_list *params)
{
	if (str == '%')
	{
		params->format == '%';
		return ;
	}
	else if (str == '0')
	{
		params->zero_padding = 1;
		p_zero_padding(str, params);
	}
	else if (str == '-')
	{
		params->minus = 1;
		params->zero_padding = 0; // OR ERROR ??
		p_minus(str, params);
	}
	else if (ft_isdigit(str))
	{
		params->width = ft_atoi(str);	
		p_width(str, params);
	}
	else if (str == '.')
	{
		params->dot = 1;
		p_dot(str, params);
	}
	else if (str == '*')
	{
		params->asterisk = 1;
		p_asterisk(str, params);
	}
	else if (!valid_format(str))
		return ;
	str++;
	2nd_parsing(str, params);
}



void	check_format(char *str, sruct x_list *params)
{
	if (params->format == 'd')
	else if (params->format == 'c')	
	else if (params->format == 's')	
	else if (params->format == 'u')	
	else if (params->format == 'p')	
	else if (params->format == 'x')	
	else if (params->format == 'X')	
	else if (params->format == '%')	
}
