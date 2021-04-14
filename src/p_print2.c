#include "../includes/ft_printf.h"

char	*p_config(va_list arg, struct x_list *params)
{
	//void	*ptr;
	//char	*ptr_to_str;
	(void)arg;
	char *address;
//	unsigned long ptr2;
	int		len_str;

	//ptr = va_arg(arg, void *);
 //   ptr2 = (unsigned long)ptr;
	//ptr_to_str = ft_itoa_base_lu("0123456789abcdef", ptr2);
	//ft_putstr_fd("\nAAA\n", 1);
	//ft_putstr_fd(ptr_to_str, 1);
	//ft_putstr_fd("\nAAA\n", 1);
	len_str = ft_strlen(params->str);
	address = ft_strjoin("0x", params->str);
	//free(ptr_to_str);
	if (!ft_strncmp(address, "0x0", ft_strlen(address)))
	{
		//printf("\nptr=%d\n", ft_strlen(ptr));
		address = "0x";
		params->format_len = 2;
		len_str = ft_strlen(address);
		//params->width += 1;
	}
	else
	{
		params->format_len = len_str + 2;
	}
	return (address);
}

void	p_print(struct x_list *params, va_list arg)
{
	char *ptr;
	int i;

	ptr = p_config(arg, params);
	i = 0;
	if (!params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
	ft_putstr_fd(ptr, 1);
	params->return_size += params->format_len;
	if (params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
}
