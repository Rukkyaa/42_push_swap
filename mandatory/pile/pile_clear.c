/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:33:49 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 21:06:53 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pile_clear(t_pile *pile)
{
	t_pile	*tmp;

	while (pile)
	{
		tmp = (pile)->next;
		free(pile);
		pile = tmp;
	}
}
