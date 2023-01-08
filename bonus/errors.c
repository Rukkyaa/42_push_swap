/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:46:31 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/08 23:55:54 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap_bonus.h"

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
