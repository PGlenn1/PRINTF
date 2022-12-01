/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:36:41 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 19:32:54 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_n(int n)
{
	int	len_n;
	int	n_parsed;

	len_n = 1;
	n_parsed = n;
	while (n_parsed / 10 != 0)
	{
		n_parsed = n_parsed / 10;
		len_n++;
	}
	if (n < 0)
		len_n++;
	return (len_n);
}
