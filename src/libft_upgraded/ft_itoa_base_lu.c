/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_lu.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:28:51 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 19:38:31 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_lu(char *base, unsigned long n)
{
	int		i;
	int		len_n_base;
	char	*s;

	if (!ft_valid_base(base))
		return (NULL);
	len_n_base = ft_len_n_base_lu(base, n);
	s = malloc((len_n_base + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
		return ("0");
	i = 0;
	while (i < len_n_base)
	{
		s[len_n_base - 1 - i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	s[i] = '\0';
	return (s);
}
