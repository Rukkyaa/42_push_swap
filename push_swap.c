/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:23:04 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/06 17:12:38 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_rotate(t_pile **stack_a)
{
	// printf("test\n");
	while (pile_get_min(*stack_a) != (*stack_a)->value)
		do_rotate(stack_a, "ra\n");
	// while (pile_get_at(*stack_a, pile_size(*stack_a) - 1)->value != pile_get_min(*stack_a))
	// 	do_rotate(stack_a, "ra\n");
}

t_pile	*push_swap(t_pile *stack_a)
{
	t_pile	*stack_b;
	t_pile	*tmp;
	
	stack_b = NULL;
	// printf("\n\nDo_mediane\n\n");
	do_mediane(&stack_a, &stack_b);
	do_push(&stack_a, &stack_b, "pb\n");
	set_cost(stack_a, stack_b);

	while (stack_b)
	{
		set_cost(stack_a, stack_b);
		tmp = pile_get_at(stack_b, get_best_cost(stack_b));
		while (tmp->cost_a > 0 && tmp->cost_b > 0)
		{
			do_rotate(&stack_a, "r");
			do_rotate(&stack_b, "r\n");
			--(tmp->cost_a);
			--(tmp->cost_b);
		}
		while (tmp->cost_a < 0 && tmp->cost_b < 0)
		{
			do_rev_rotate(&stack_a, "r");
			do_rev_rotate(&stack_b, "rr\n");
			++(tmp->cost_a);
			++(tmp->cost_b);
		}
		while (tmp->cost_a != 0)
		{
			if (tmp->cost_a > 0)
			{
				do_rotate(&stack_a, "ra\n");
				--(tmp->cost_a);
			}
			else
			{
				do_rev_rotate(&stack_a, "rra\n");
				++(tmp->cost_a);
			}
		}
		while (tmp->cost_b != 0)
		{
			if (tmp->cost_b > 0)
			{
				do_rotate(&stack_b, "rb\n");
				--(tmp->cost_b);
			}
			else
			{
				// printf("Cost : %d\n", tmp->cost_b);
				do_rev_rotate(&stack_b, "rrb\n");
				++(tmp->cost_b);
			}
		}
		do_push(&stack_b, &stack_a, "pa\n");
	}
	final_rotate(&stack_a);
	// printf("\n\n\n---------- PILE A ----------\n");
	// pile_show(stack_a);
	// printf("---------- PILE B ----------\n");
	// pile_show(stack_b);
	// printf("----------------------------\n\n\n");
	pile_clear(stack_b);
	return (stack_a);
}