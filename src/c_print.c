#include "../includes/ft_printf.h"

void	c_print(struct x_list *params, va_list arg)
{
	char c;
	int i;

	c = va_arg(arg, int);
	params->width -= 1;
	if (!params->minus)
	{
		i = 0;
		while (i++ < params->width)
			ft_putchar_count(' ', params);
	}
	ft_putchar_count(c, params);
	if (params->minus)
	{
		i = 0;
		while (i++ < params->width)
			ft_putchar_count(' ', params);
	}
}