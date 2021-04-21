/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:46:10 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/21 14:56:41 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*p_config(va_list arg, struct s_struct *params)
{
	void			*ptr;
	unsigned long	ptr2;
	char			*ptr_to_str;
	char			*address;

	ptr = va_arg(arg, void *);
	ptr2 = (unsigned long)ptr;
	ptr_to_str = ft_itoa_base_lu("0123456789abcdef", ptr2);
	address = ft_strjoin("0x", ptr_to_str);
	free(ptr_to_str);
	if (!ft_strncmp(address, "0x0", ft_strlen(address))
		&& params->dot && !params->precision)
		ft_strlcpy(address, "0x", 3);
	params->format_len = ft_strlen(address);
	return (address);
}

void	p_print(struct s_struct *params, va_list arg)
{
	char	*ptr;
	int		i;

	ptr = p_config(arg, params);
	i = 0;
	if (!params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
	ft_putstr_fd(ptr, 1);
	free(ptr);
	params->return_size += params->format_len;
	if (params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
}
