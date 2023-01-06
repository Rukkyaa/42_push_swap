/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:35:32 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/29 13:27:47 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
