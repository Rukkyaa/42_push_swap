/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_is_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:12:23 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/03 16:06:10 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pile_is_sort(t_pile *pile)
{
	if (!pile)
		return (0);
	while (pile->next)
	{
		if (pile->value > pile->next->value)
			return (0);
		pile = pile->next;
	}
	return (1);
}
