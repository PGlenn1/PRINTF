/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_ui.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:28:51 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 19:29:22 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_ui(char *base, unsigned int n)
{
	int		i;
	int		len_n_base;
	char	*s;

	if (!ft_valid_base(base))
		return (NULL);
	len_n_base = ft_len_n_base_ui(base, n);
	s = malloc((len_n_base + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	i = 0;
	while (i < len_n_base)
	{
		s[len_n_base - 1 - i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	s[i] = '\0';
	return (s);
}
