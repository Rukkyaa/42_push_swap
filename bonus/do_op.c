/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:55:29 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/08 23:55:39 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap_bonus.h"

void	swap(t_pile **stack_a, t_pile **stack_b, char *move)
{
	if (!ft_strcmp(move, "sa\n"))
		do_swap(*stack_a);
	else if (!ft_strcmp(move, "sb\n"))
		do_swap(*stack_b);
	else if (!ft_strcmp(move, "ss\n"))
	{
		do_swap(*stack_a);
		do_swap(*stack_b);
	}
}

void	rotate(t_pile **stack_a, t_pile **stack_b, char *move)
{
	if (!ft_strcmp(move, "ra\n"))
		do_rotate(stack_a);
	else if (!ft_strcmp(move, "rb\n"))
		do_rotate(stack_b);
	else if (!ft_strcmp(move, "rr\n"))
	{
		do_rotate(stack_a);
		do_rotate(stack_b);
	}
}

void	rev_rotate(t_pile **stack_a, t_pile **stack_b, char *move)
{
	if (!ft_strcmp(move, "rra\n"))
		do_rev_rotate(stack_a);
	else if (!ft_strcmp(move, "rrb\n"))
		do_rev_rotate(stack_b);
	else if (!ft_strcmp(move, "rrr\n"))
	{
		do_rev_rotate(stack_a);
		do_rev_rotate(stack_b);
	}
}

void	push(t_pile **stack_a, t_pile **stack_b, char *move)
{
	if (!ft_strcmp(move, "pa\n"))
		do_push(stack_b, stack_a);
	else if (!ft_strcmp(move, "pb\n"))
		do_push(stack_a, stack_b);
}

bool	do_move(t_pile **stack_a, t_pile **stack_b, char *move)
{
	if (!move)
		return (1);
	if (!ft_strcmp(move, "sa\n") || !ft_strcmp(move, "sb\n")
		|| !ft_strcmp(move, "ss\n"))
		swap(stack_a, stack_b, move);
	else if (!ft_strcmp(move, "ra\n") || !ft_strcmp(move, "rb\n")
		|| !ft_strcmp(move, "rr\n"))
		rotate(stack_a, stack_b, move);
	else if (!ft_strcmp(move, "rra\n") || !ft_strcmp(move, "rrb\n")
		|| !ft_strcmp(move, "rrr\n"))
		rev_rotate(stack_a, stack_b, move);
	else if (!ft_strcmp(move, "pa\n") || !ft_strcmp(move, "pb\n"))
		push(stack_a, stack_b, move);
	else
		return (write(2, "Error : Wrong operation\n", 24));
	return (0);
}
