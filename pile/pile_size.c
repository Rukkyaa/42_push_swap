/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:45:23 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/29 15:46:38 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned int	pile_size(t_pile *pile)
{
	unsigned int	size;

	size = 0;
	while (pile)
	{
		pile = pile->next;
		size++;
	}
	return (size);
}
