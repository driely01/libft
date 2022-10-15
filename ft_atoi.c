/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:55:14 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 16:58:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		i;
	size_t	res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		i++;
		sign *= -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	/*if (res > 9223372036854775807 && sign == 1)
		return (-1);
	else if (res > 9223372036854775807 && sign == -1)
		return (0);*/
	return (res * sign);
}
