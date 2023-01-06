/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:11:21 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/29 14:27:49 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static bool	ft_is_spaces(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char const *str)
{
	int		i;
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	i = -1;
	while (ft_is_spaces(str[++i]))
		;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (ft_is_digit(str[i]))
		result = result * 10 + str[i++] - '0';
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	return (result * sign);
}
