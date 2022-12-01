/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_n_ui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:53:43 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 18:17:55 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_n_ui(unsigned int n)
{
	unsigned int	len_n;
	unsigned int	n_parsed;

	len_n = 1;
	n_parsed = n;
	while (n_parsed / 10 != 0)
	{
		n_parsed = n_parsed / 10;
		len_n++;
	}
	return (len_n);
}
