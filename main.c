/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:17:21 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/06 19:19:31 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	*stack_a;

	if (argc < 2)
		return (EXIT_FAILURE);
	stack_a = pile_init(argc, argv);
	
	if (pile_size(stack_a) == 2)
		stack_a = sort_two(stack_a);
	else
		stack_a = push_swap(stack_a);
	//pile_show(stack_a);
	// printf("sa\n");
	pile_clear(stack_a);
	return (EXIT_SUCCESS);
}
