/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:35:32 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:05:52 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pile_add_back(t_pile **pile, t_pile *new)
{
	t_pile	*last;

	if (*pile)
	{
		last = pile_last(*pile);
		last->next = new;
	}
	else
		*pile = new;
}
