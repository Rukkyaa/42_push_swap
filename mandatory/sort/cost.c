/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:04 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/08 21:07:48 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	cost_a(t_pile *stack_a, int nb)
{
	int	index;

	if (!stack_a)
		return (0);
	index = pile_get_index(stack_a, get_nearest(stack_a, nb));
	if (index > (int)pile_size(stack_a) / 2)
		return (-(pile_size(stack_a) - index));
	return (index);
}

void	set_cost(t_pile *stack_a, t_pile *stack_b)
{
	int	i;
	int	size;

	size = pile_size(stack_b);
	i = 0;
	while (stack_b)
	{
		stack_b->cost_a = cost_a(stack_a, stack_b->value);
		stack_b->cost_b = i;
		if (i > size / 2)
			stack_b->cost_b = -(size - i);
		++i;
		stack_b = stack_b->next;
	}
}

int	get_best_cost(t_pile *stack_b)
{
	int	min;
	int	index;
	int	i;

	min = INT_MAX;
	i = 0;
	while (stack_b)
	{
		if (ft_abs(stack_b->cost_a) + ft_abs(stack_b->cost_b) < min)
		{
			min = ft_abs(stack_b->cost_a) + ft_abs(stack_b->cost_b);
			index = i;
		}
		i++;
		stack_b = stack_b->next;
	}
	return (index);
}
