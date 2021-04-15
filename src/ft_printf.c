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
	params->to_print = 0;
	params->format = 0;
}

#include "../includes/ft_printf.h"

void    u_print_flag(char c, int to_print, struct x_list *params)
{
    int i;
    
    i = 0;
    while (i < to_print)
    {
        ft_putchar_count(c, params);
        i++;
    }
}

int		u_specific_cases(unsigned int u, struct x_list *params)
{
	if (u == 0 && params->dot)
	{
		if (!params->precision)
		{
			if (!params->width)
				write(1, "", 0);
			else
				ft_putchar_count(' ', params);
		}
		else
			ft_putchar_count('0', params);
		return (1);
	}
	return (0);
}

unsigned int 	u_config(struct x_list *params, va_list arg)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);
	params->format_len = ft_len_n_ui(n);
	if (params->precision > params->format_len)
	{
		params->print_precision = 1;
		params->to_print = params->width - params->precision;
	}
	else
		params->to_print = params->width - params->format_len;
	if (params->dot && params->precision >= 0)
		params->zero_padding = 0;
	return (n);
}

void	u_print(struct x_list *params, va_list arg)
{
	unsigned int u;

	u = u_config(params, arg);
	if (!params->minus && params->width > params->format_len)
	{
		if (params->zero_padding)
            u_print_flag('0', params->to_print, params);
		else
            u_print_flag(' ', params->to_print, params);
	}
	if (params->print_precision)
	{
        u_print_flag('0', params->precision - params->format_len, params);
	}
	if (!u_specific_cases(u, params))
		ft_putnbr_count_ui(u, params);
	if (params->minus && params->width > params->precision)
        u_print_flag(' ', params->to_print, params);
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
	else if (params->format == 'u')
	{
		u_print(params, arg);
	}
	else if (params->format == 'x' || params->format == 'X')
		xX_print(params, arg);
//	else if (params->format == '%')
//	{
//		ft_putchar_fd('%', 1);
//		params->return_size++;
//	}
	else
		printf("ERROR\n");
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
	va_list	arg;

	va_start(arg, format);
	params = malloc(sizeof(p_list));
	init_struct(params);
	params->return_size = 0;
	parse = format;
	print_parsing(parse, params, arg);
	va_end(arg);
	return (params->return_size);
}
