/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_n_base_lu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:34:24 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 21:54:02 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_n_base_lu(char *base, unsigned long n)
{
	int		base_len;
	int		len_n_base;

	if (n == 0)
		return (1);
	base_len = ft_strlen(base);
	len_n_base = 0;
	while (n != 0)
	{
		n /= base_len;
		len_n_base++;
	}
	return (len_n_base);
}
