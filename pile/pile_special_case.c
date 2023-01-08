/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_special_case.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:18:39 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/08 21:18:48 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static unsigned int	ft_is_spaces(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static unsigned int	check_zero(char const *str)
{
	unsigned int	i;

	i = -1;
	while (ft_is_spaces(str[++i]))
		;
	if (str[i] == '+' || str[i] == '-')
		i ++;
	i --;
	while (str[++i])
	{
		if (str[i] != '0')
			return (0);
	}
	return (1);
}

unsigned int	pile_special_case(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (ft_atoi(argv[i]) == 0)
		{
			if (!check_zero(argv[i]))
				return (0);
			else if (argv[i][0] == '+' && !argv[i][1])
				return (0);
			else if (argv[i][0] == '-' && !argv[i][1])
				return (0);
		}
	}
	return (1);
}
