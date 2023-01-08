/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:43:48 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/08 23:19:21 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	do_swap(t_pile *pile)
{
	int	tmp;

	if (pile_size(pile) < 2)
		return ;
	tmp = pile->value;
	pile->value = pile->next->value;
	pile->next->value = tmp;
}

void	do_push(t_pile **src, t_pile **dest)
{
	t_pile	*tmp;

	if (!(*src))
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	do_rotate(t_pile **src)
{
	t_pile	*tmp;
	t_pile	*last;

	if (pile_size(*src) < 2)
		return ;
	tmp = (*src);
	last = pile_last(*src);
	*src = (*src)->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	do_rev_rotate(t_pile **src)
{
	t_pile	*before_last;
	t_pile	*last;
	t_pile	*begin;

	if (pile_size(*src) < 2)
		return ;
	begin = *src;
	last = pile_last(*src);
	before_last = pile_before_last(*src);
	*src = last;
	last->next = begin;
	before_last->next = NULL;
}
