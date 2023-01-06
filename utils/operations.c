/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:43:48 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/05 17:56:31 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_swap(t_pile *pile, char *str)
{
	int	tmp;

	if (pile_size(pile) < 2)
		return ;
	tmp = pile->value;
	pile->value = pile->next->value;
	pile->next->value = tmp;
	printf("%s", str);
}

void	do_push(t_pile **src, t_pile **dest, char *str)
{
	t_pile	*tmp;

	if (!(*src))
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
	printf("%s", str);
}

void	do_rotate(t_pile **src, char *str)
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
	printf("%s", str);
}

void	do_rev_rotate(t_pile **src, char *str)
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
	printf("%s", str);
}
