/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_is_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:12:23 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:07:19 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	pile_is_sort(t_pile *pile)
{
	if (!pile)
		return (0);
	while (pile->next)
	{
		if (pile->value > pile->next->value)
			return (0);
		pile = pile->next;
	}
	return (1);
}
