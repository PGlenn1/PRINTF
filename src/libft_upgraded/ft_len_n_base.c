/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_n_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:28:57 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 18:32:23 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_n_base(char *base, int n)
{
	int	base_len;
	int	len_n_base;

	base_len = ft_strlen(base);
	len_n_base = 0;
	if (n < 0)
		len_n_base++;
	while (n != 0)
	{
		n /= base_len;
		len_n_base++;
	}
	return (len_n_base);
}
