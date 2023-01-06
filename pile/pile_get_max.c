/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_get_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:06:20 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/03 16:06:44 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pile_get_max(t_pile *pile)
{
	int	max;

	max = pile->value;
	while (pile)
	{
		if (pile->value > max)
			max = pile->value;
		pile = pile->next;
	}
	return (max);
}
