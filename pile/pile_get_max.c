/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_get_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:06:20 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:07:01 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pile_get_max(t_pile *pile)
{
	int	max;

	max = pile->value;
	while (pile)
	{
		if (pile->value > max)
			max = pile->value;
		pile = pile->next;
	}
	return (max);
}
