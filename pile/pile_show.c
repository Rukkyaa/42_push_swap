/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_show.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:43:24 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/29 13:26:47 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
