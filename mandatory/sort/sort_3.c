/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:04:19 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:07:59 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_pile	*sort_three(t_pile *stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = pile_get_at(stack_a, 0)->value;
	mid = pile_get_at(stack_a, 1)->value;
	bot = pile_get_at(stack_a, 2)->value;
	if (top > mid && bot > mid && top < bot)
		do_swap(stack_a, "sa\n");
	else if (top > mid && mid > bot && top > bot)
	{
		do_swap(stack_a, "sa\n");
		do_rev_rotate(&stack_a, "rra\n");
	}
	else if (top > mid && bot > mid && top > bot)
		do_rotate(&stack_a, "ra\n");
	else if (top < mid && mid > bot && top < bot)
	{
		do_swap(stack_a, "sa\n");
		do_rotate(&stack_a, "ra\n");
	}
	else if (top < mid && mid > bot && top > bot)
		do_rev_rotate(&stack_a, "rra\n");
	return (stack_a);
}
