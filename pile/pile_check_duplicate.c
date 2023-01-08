/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_check_duplicate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:16:12 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/08 21:38:45 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

unsigned int	pile_check_duplicate(t_pile *pile)
{
	t_pile	*begin;
	t_pile	*current;

	begin = pile;
	if (!pile)
		return (0);
	while (begin)
	{
		current = begin->next;
		while (current)
		{
			if (current->value == begin->value)
				return (0);
			current = current->next;
		}
		begin = begin->next;
	}
	return (1);
}
