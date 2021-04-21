/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:46:01 by gpiriou           #+#    #+#             */
/*   Updated: 2021/04/21 15:59:04 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../src/libft_upgraded/libft.h"

typedef struct	s_struct {
	int		print_precision;
	int		minus;
	int		dot;
	int		zero_padding;
	int		d_negative;
	int		prec_and_len;
	int		wid_and_len;
	int		wid_and_prec;
	int		d_min;
	int		width;
	int		precision;
	int		format_len;
	int		to_print;
	int		return_size;
	char	format;
}				t_params;

int				ft_printf(char *format, ...);
void			ft_putchar_count(char c, struct s_struct *params);
void			ft_putnbr_count(int n, struct s_struct *params);
void			ft_putnbr_count_ui(unsigned int n, struct s_struct *params);
void			c_print(struct s_struct *params, va_list arg);
void			d_config(struct s_struct *params, va_list arg);
void			s_config(struct s_struct *params, va_list arg);
void			p_print(struct s_struct *params, va_list arg);
void			x_print(struct s_struct *params, va_list arg);
void			u_print(struct s_struct *params, va_list arg);
void			percent_print(struct s_struct *params);
void			parsing(char *str, struct s_struct *params, va_list arg);
void			is_valid_format(char *str, struct s_struct *params);

#endif
