/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:42:21 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/01 19:24:48 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= 'A' && char_c <= 'Z')
		return (1);
	return (0);
}
