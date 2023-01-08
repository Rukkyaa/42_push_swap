/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_get_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:48:08 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:07:03 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pile_get_min(t_pile *pile)
{
	int	min;

	min = pile->value;
	while (pile)
	{
		if (pile->value < min)
			min = pile->value;
		pile = pile->next;
	}
	return (min);
}

int	pile_get_min_mediane(t_pile *pile, int curr)
{
	int	min;

	min = pile_get_max(pile);
	while (pile)
	{
		if (pile->value < min && pile->value > curr)
			min = pile->value;
		pile = pile->next;
	}
	return (min);
}
