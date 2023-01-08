/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:45:23 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 23:12:46 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

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
