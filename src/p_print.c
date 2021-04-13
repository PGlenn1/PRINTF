#include "../includes/ft_printf.h"

char	*p_config(va_list arg, struct x_list *params)
{
	void	*ptr;
	char	*ptr_to_str;
	char *address;
	unsigned long ptr2;
	int		len_str;
	

	ptr = va_arg(arg, void *);
    ptr2 = (unsigned long)ptr;
	ptr_to_str = ft_itoa_base_lu("0123456789abcdef", ptr2);
	len_str = ft_strlen(ptr_to_str);
	address = ft_strjoin("0x", ptr_to_str);
	free(ptr_to_str);
	params->format_len = len_str + 2;
	return (address);
}

void	p_print(struct x_list *params, va_list arg)
{
	char *ptr;
	int i;

	ptr = p_config(arg, params);
	i = 0;
	if (!ft_strncmp(ptr, "0x0", 3) && params->dot)
	{
		ptr = "0x";
		params->width += 1;
	}
	if (!params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
	while (*ptr)
		ft_putchar_count(*(ptr++), params);
	if (params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
}
