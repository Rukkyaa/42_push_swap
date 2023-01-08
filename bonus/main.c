/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:28:42 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/09 00:19:16 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap_bonus.h"

void	checker(t_pile **stack_a, t_pile **stack_b)
{
	char	*line;

	line = "begin";
	while (line)
	{
		line = get_next_line(0);
		if (do_move(stack_a, stack_b, line))
		{
			free(line);
			return ;
		}
		free(line);
	}
}

int	main(int argc, char **argv)
{
	t_pile	*stack_a;
	t_pile	*stack_b;

	if (argc < 2)
		return (EXIT_FAILURE);
	stack_a = pile_init(argc, argv);
	stack_b = NULL;
	if (check_error(argc, argv, stack_a))
	{
		pile_clear(stack_a);
		return (EXIT_FAILURE);
	}
	checker(&stack_a, &stack_b);
	if (pile_is_sort(stack_a) && !stack_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	pile_clear(stack_a);
	pile_clear(stack_b);
	return (EXIT_SUCCESS);
}
