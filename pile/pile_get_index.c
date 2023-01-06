/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_get_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:47:48 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/04 17:45:31 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pile_get_index(t_pile *pile, int value)
{
	int	i;

	i = 0;
	while (pile && pile->value != value)
	{
		++i;
		pile = pile->next;
	}
	return (i);
}