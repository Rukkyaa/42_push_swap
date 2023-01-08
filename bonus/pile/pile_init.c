/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:39:49 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 22:52:31 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

t_pile	*pile_init(int argc, char **argv)
{
	unsigned int	i;
	t_pile			*pile;
	t_pile			*new;

	i = 0;
	pile = NULL;
	while (++i < (unsigned int)argc)
	{
		new = pile_new(ft_atoi(argv[i]));
		if (!new)
		{
			pile_clear(pile);
			return (NULL);
		}
		new->cost_a = 0;
		new->cost_b = 0;
		pile_add_back(&pile, new);
	}
	return (pile);
}
