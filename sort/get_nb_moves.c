/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:54:17 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/06 17:12:04 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_nearest(t_pile *stack_a, int nb)
{
	int	nearest = INT_MAX;

	while (stack_a)
	{
		if (stack_a->value > nb && stack_a->value < nearest)
			nearest = stack_a->value;
		stack_a = stack_a->next;
	}
	return (nearest);
}
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
	(void)size;//FDP
	// printf("\n\n\n---------- PILE A ----------\n");
	// pile_show(stack_a);
	// printf("---------- PILE B ----------\n");
	// pile_show(stack_b);
	// printf("----------------------------\n\n\n");
	size = pile_size(stack_b);
	i = 0;
	while (stack_b)
	{
		stack_b->cost_a = cost_a(stack_a, stack_b->value);
		stack_b->cost_b = i;
		if (i > size / 2)
			stack_b->cost_b = -(size - i);
		// printf("%d cost_a -> %d, cost_b -> %d\n", stack_b->value, stack_b->cost_a, stack_b->cost_b);
		++i;
		stack_b = stack_b->next;
	}
}

int	get_best_cost(t_pile *stack_b)
{
	int	min = INT_MAX;
	int	index;
	int	i;

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
	// printf("Min = %d\n", min);
	return (index);
}

int	get_moves(t_pile *stack_a, int nb)
{
	int	i;

	i = 0;
	if (!stack_a)
		return (0);
	while(stack_a && stack_a->value < nb)
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
	int		i = 0;
	int		index = 0;
	int		min = get_moves(stack_a, stack_b->value);
	
	while (stack_b)
	{
		if (get_moves(stack_a, stack_b->value) + i < min)
		{
			min = get_moves(stack_a, stack_b->value) + i;
			index = i;
		}
		// printf("get_moves(%d) = %d\n", stack_b->value, get_moves(stack_a, stack_b->value));
		// printf("Nb_move_min : %d\n", min);
		++i;
		stack_b = stack_b->next;
	}
	return (index);
}