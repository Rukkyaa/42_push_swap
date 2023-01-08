/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:17:21 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:57:33 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

unsigned int	check_error(int argc, char **argv, t_pile *pile)
{
	char	*str;

	str = NULL;
	if (!pile)
		str = "Error : Pile creation failed\n";
	else if (!pile_special_case(argc, argv))
		str = "Error : Invalid int found\n";
	else if (!pile_check_duplicate(pile))
		str = "Error : There is duplicate in the pile\n";
	else if (pile_is_sort(pile))
		str = "Error : The pile is already sort\n";
	if (str)
		return (write(STDERR_FILENO, str, ft_strlen(str)));
	return (0);
}

int	main(int argc, char **argv)
{
	t_pile	*stack_a;

	if (argc < 2)
		return (EXIT_FAILURE);
	stack_a = pile_init(argc, argv);
	if (check_error(argc, argv, stack_a))
	{
		pile_clear(stack_a);
		return (EXIT_FAILURE);
	}
	if (pile_size(stack_a) == 2)
		stack_a = sort_two(stack_a);
	else if (pile_size(stack_a) == 3)
		stack_a = sort_three(stack_a);
	else
		stack_a = push_swap(stack_a);
	pile_clear(stack_a);
	return (EXIT_SUCCESS);
}
