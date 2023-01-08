/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:54:17 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:07:51 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_nearest(t_pile *stack_a, int nb)
{
	int	nearest;

	nearest = INT_MAX;
	while (stack_a)
	{
		if (stack_a->value > nb && stack_a->value < nearest)
			nearest = stack_a->value;
		stack_a = stack_a->next;
	}
	return (nearest);
}

int	get_moves(t_pile *stack_a, int nb)
{
	int	i;

	i = 0;
	if (!stack_a)
		return (0);
	while (stack_a && stack_a->value < nb)
	{	
		++i;
		stack_a = stack_a->next;
	}
	return (i);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	get_best_moves(t_pile *stack_a, t_pile *stack_b)
{
	int		i;
	int		index;
	int		min;

	i = 0;
	index = 0;
	min = get_moves(stack_a, stack_b->value);
	while (stack_b)
	{
		if (get_moves(stack_a, stack_b->value) + i < min)
		{
			min = get_moves(stack_a, stack_b->value) + i;
			index = i;
		}
		++i;
		stack_b = stack_b->next;
	}
	return (index);
}
