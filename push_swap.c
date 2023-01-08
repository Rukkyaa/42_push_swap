/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:23:04 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:08:37 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	final_rotate(t_pile **stack_a)
{
	while (pile_get_min(*stack_a) != (*stack_a)->value)
		do_rotate(stack_a, "ra\n");
}

void	do_both(t_pile **stack_a, t_pile **stack_b, t_pile *tmp)
{
	while (tmp->cost_a > 0 && tmp->cost_b > 0)
	{
		do_rotate(stack_a, "r");
		do_rotate(stack_b, "r\n");
		--(tmp->cost_a);
		--(tmp->cost_b);
	}
	while (tmp->cost_a < 0 && tmp->cost_b < 0)
	{
		do_rev_rotate(stack_a, "r");
		do_rev_rotate(stack_b, "rr\n");
		++(tmp->cost_a);
		++(tmp->cost_b);
	}
}

void	do_move(t_pile **stack_a, t_pile **stack_b, t_pile *tmp)
{
	do_both(stack_a, stack_b, tmp);
	while (tmp->cost_a > 0)
	{
		do_rotate(stack_a, "ra\n");
		--(tmp->cost_a);
	}
	while (tmp->cost_a < 0)
	{
		do_rev_rotate(stack_a, "rra\n");
		++(tmp->cost_a);
	}
	while (tmp->cost_b > 0)
	{
		do_rotate(stack_b, "rb\n");
		--(tmp->cost_b);
	}
	while (tmp->cost_b < 0)
	{
		do_rev_rotate(stack_b, "rrb\n");
		++(tmp->cost_b);
	}
}

t_pile	*push_swap(t_pile *stack_a)
{
	t_pile	*stack_b;
	t_pile	*tmp;

	stack_b = NULL;
	do_mediane(&stack_a, &stack_b);
	do_push(&stack_a, &stack_b, "pb\n");
	set_cost(stack_a, stack_b);
	while (stack_b)
	{
		set_cost(stack_a, stack_b);
		tmp = pile_get_at(stack_b, get_best_cost(stack_b));
		do_move(&stack_a, &stack_b, tmp);
		do_push(&stack_b, &stack_a, "pa\n");
	}
	final_rotate(&stack_a);
	pile_clear(stack_b);
	return (stack_a);
}
