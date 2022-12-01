/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:23:40 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 18:32:40 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skip_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t'
		|| str[i] == '\n'
		|| str[i] == '\r'
		|| str[i] == '\v'
		|| str[i] == '\f'
		|| str[i] == '\b'
		|| str[i] == ' '
		|| str[i] > 126)
		i++;
	return (i);
}
