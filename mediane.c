/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:40:27 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/06 17:12:32 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_mediane(t_pile **stack_a, t_pile **stack_b)
{
	int	index_mediane;
	int	i;
	int	mediane;

	i = -1;
	index_mediane = pile_size(*stack_a) / 2 + pile_size(*stack_a) % 2;
	mediane = pile_get_min(*stack_a);
	while (++i < index_mediane - (int)pile_size(*stack_a) % 2)
		mediane = pile_get_min_mediane(*stack_a, mediane);
	i = -1;
	while (++i < index_mediane)
	{
		while ((*stack_a)->value < mediane)
			do_rotate(stack_a, "ra\n");
		if ((*stack_a)->value != pile_get_max(*stack_a))
			do_push(stack_a, stack_b, "pb\n");
	}
	while (*stack_a && pile_size(*stack_a) != 1)
	{
		if ((*stack_a)->value != pile_get_max(*stack_a))
			do_push(stack_a, stack_b, "pb\n");
		else
			do_rotate(stack_a, "ra\n");
	}
}
