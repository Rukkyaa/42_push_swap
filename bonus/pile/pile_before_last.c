/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_before_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:05:44 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 23:12:15 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

t_pile	*pile_before_last(t_pile *pile)
{
	if (!pile)
		return (NULL);
	while (pile->next->next)
		pile = pile->next;
	return (pile);
}
