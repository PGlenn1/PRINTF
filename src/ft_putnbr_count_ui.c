/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count_ui.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:44:48 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 15:46:03 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_count_ui(unsigned int n, struct s_struct *params)
{
	if (n <= 9)
		ft_putchar_count(n + '0', params);
	else
	{
		ft_putnbr_count_ui(n / 10, params);
		ft_putchar_count((n % 10) + '0', params);
	}
}
