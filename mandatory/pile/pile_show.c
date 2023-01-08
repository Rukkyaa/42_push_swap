/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_show.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:43:24 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:07:34 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pile_show(t_pile *pile)
{
	unsigned int	index;

	index = 0;
	while (pile)
	{
		printf("Pile(%d) -> %d\n", ++index, pile->value);
		pile = pile->next;
	}
}
