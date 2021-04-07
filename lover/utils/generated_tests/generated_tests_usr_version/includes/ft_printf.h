/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:46:01 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/06 18:00:31 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "../includes/libft.h"

typedef struct x_list {
	int	print_precision;// BOOL
	int	minus;			// BOOL
	int dot;			// BOOL
	int	zero_padding;   // BOOL
	int d_negative;		// BOOL
	int	prec_and_len;	// BOOL
	int	wid_and_len;	// BOOL
	int width;
	int precision;
	int	format_len;		
	int	return_size;
	char format;
} p_list;

int		ft_printf(char *format, ...);
void	ft_putchar_count(char c, struct x_list *params);
void	ft_putnbr_count(int n, struct x_list *params);

#endif
