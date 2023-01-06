/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:16:14 by axlamber          #+#    #+#             */
/*   Updated: 2023/01/06 19:08:13 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_pile
{
	int				value;
	int				cost_a;
	int				cost_b;
	struct s_pile	*next;
}				t_pile;

t_pile			*push_swap(t_pile *stack_A);

/*************************************************************/
/* $$\   $$\ $$$$$$$$\ $$$$$$$$\ $$$$$$\ $$\       $$$$$$\   */
/* $$ |  $$ |\__$$  __|\__$$  __|\_$$  _|$$ |     $$  __$$\  */
/* $$ |  $$ |   $$ |      $$ |     $$ |  $$ |     $$ /  \__| */
/* $$ |  $$ |   $$ |      $$ |     $$ |  $$ |     \$$$$$$\   */
/* $$ |  $$ |   $$ |      $$ |     $$ |  $$ |      \____$$\  */
/* $$ |  $$ |   $$ |      $$ |     $$ |  $$ |     $$\   $$ | */
/* \$$$$$$  |   $$ |      $$ |   $$$$$$\ $$$$$$$$\\$$$$$$  | */
/*  \______/    \__|      \__|   \______|\________|\______/  */
/*************************************************************/

int				ft_atoi(char const *str);
void			do_mediane(t_pile **stack_a, t_pile **stack_b);

/************************/
/*  $$$$$$\  $$$$$$$\   */
/* $$  __$$\ $$  __$$\  */
/* $$ /  $$ |$$ |  $$ | */
/* $$ |  $$ |$$$$$$$  | */
/* $$ |  $$ |$$  ____/  */
/* $$ |  $$ |$$ |       */
/*  $$$$$$  |$$ |       */
/*  \______/ \__|       */
/************************/

void			do_swap(t_pile *pile, char *str);
void			do_push(t_pile **src, t_pile **dest, char *str);
void			do_rotate(t_pile **src, char *str);
void			do_rev_rotate(t_pile **src, char *str);

/*****************************************/
/* $$$$$$$\ $$$$$$\ $$\       $$$$$$$$\  */
/* $$  __$$\\_$$  _|$$ |      $$  _____| */
/* $$ |  $$ | $$ |  $$ |      $$ |       */
/* $$$$$$$  | $$ |  $$ |      $$$$$\     */
/* $$  ____/  $$ |  $$ |      $$  __|    */
/* $$ |       $$ |  $$ |      $$ |       */
/* $$ |     $$$$$$\ $$$$$$$$\ $$$$$$$$\  */
/* \__|     \______|\________|\________| */
/*****************************************/

t_pile			*pile_new(int value);
t_pile			*pile_last(t_pile *pile);
t_pile			*pile_before_last(t_pile *pile);
t_pile			*pile_init(int argc, char **argv);
t_pile			*pile_get_at(t_pile *stack_b, int index);
unsigned int	pile_size(t_pile *pile);
void			pile_add_back(t_pile **pile, t_pile *new);
void			pile_add_front(t_pile **pile, t_pile *new);
void			pile_show(t_pile *pile);
void			pile_clear(t_pile *pile);
int				pile_is_sort(t_pile *pile);
int				pile_get_min(t_pile *pile);
int				pile_get_min_mediane(t_pile *pile, int curr);
int				pile_get_max(t_pile *pile);

int				pile_get_index(t_pile *pile, int value);


//Sort
int				get_moves(t_pile *stack_a, int nb);
int				get_nb_moves(t_pile *stack_a, t_pile* stack_b);
int				get_best_moves(t_pile *stack_a, t_pile *stack_b);
void			set_cost(t_pile *stack_a, t_pile *stack_b);
int				ft_abs(int nb);
int				get_best_cost(t_pile *stack_b);

t_pile			*sort_two(t_pile *stack_a);

#endif
