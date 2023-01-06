/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:05:35 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/06 19:11:35 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_pile	*sort_two(t_pile *stack_a)
{
	if (!pile_is_sort(stack_a))
		do_rotate(&stack_a, "ra\n");
	return (stack_a);
}