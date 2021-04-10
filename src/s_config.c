#include "../includes/ft_printf.h"

void	s_print(char *str, struct x_list *params)
{
	int i;
	
	i = params->width - params->format_len;
	while (!params->minus && (i-- > 0))
	{
		ft_putchar_count(' ', params);
	}
	i = params->format_len;
	while (i-- > 0)
		ft_putchar_count(*(str++), params);
	i = params->width - params->format_len;
	while (params->minus && (i-- > 0))
		ft_putchar_count(' ', params);
}

void	s_config(struct x_list *params, va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(null)";
		params->format_len = 6;
	}
	else
		params->format_len = ft_strlen(str);
	if ((params->precision < params->format_len
			&& params->precision > 0)
		|| (params->dot && params->precision == 0))
		params->format_len = params->precision;
	s_print(str, params);
}