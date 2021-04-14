#include "../includes/ft_printf.h"

void    xX_print_flag(char c, int to_print, struct x_list *params)
{
    int i;
    
    i = 0;
    while (i < to_print)
    {
        ft_putchar_count(c, params);
        i++;
    }
}

int		xX_specific_cases(char *str, struct x_list *params)
{
	if (!ft_strncmp(str, "0", ft_strlen(str)) && params->dot)
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

char	*xX_config(struct x_list *params, va_list arg)
{
	unsigned int n;
	char *n_to_str;
    int i;

	n = va_arg(arg, unsigned int);
	n_to_str = ft_itoa_base_ui("0123456789abcdef", n);
	params->format_len = ft_strlen(n_to_str);
    if (params->format == 'X')
    {
        i = 0;
        while (i < ft_strlen(n_to_str))
        {
            n_to_str[i] = ft_toupper(n_to_str[i]);
            i++;
        }
    }
	if (params->precision > params->format_len)
	{
		params->print_precision = 1;
		params->to_print = params->width - params->precision;
	}
	else
		params->to_print = params->width - params->format_len;
	if (params->dot && params->precision >= 0)
		params->zero_padding = 0;
	return (n_to_str);
}

void	xX_print(struct x_list *params, va_list arg)
{
	char *str;

	str = xX_config(params, arg);
	if (!params->minus && params->width > params->format_len)
	{
		if (params->zero_padding)
            xX_print_flag('0', params->to_print, params);
		else
            xX_print_flag(' ', params->to_print, params);
		
	}
	if (params->print_precision)
        xX_print_flag('0', params->precision - params->format_len, params);
	if (!xX_specific_cases(str, params))
	{
		ft_putstr_fd(str, 1);
		params->return_size += params->format_len;
	}
	if (params->minus && params->width > params->precision)
        xX_print_flag(' ', params->to_print, params);
}