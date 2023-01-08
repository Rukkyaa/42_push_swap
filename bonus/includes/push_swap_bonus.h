/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:04:56 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/09 00:05:49 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_pile
{
	int				value;
	int				cost_a;
	int				cost_b;
	struct s_pile	*next;
}				t_pile;

// GET NEXT LINE
char			*get_next_line(int fd);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);

// UTILS
int				ft_atoi(char const *str);
unsigned int	ft_strlen(char const *str);
int				ft_strcmp(const char *s1, const char *s2);
unsigned int	check_error(int argc, char **argv, t_pile *pile);

// STACKS
void			pile_add_back(t_pile **pile, t_pile *new);
unsigned int	pile_check_duplicate(t_pile *pile);
void			pile_clear(t_pile *pile);
t_pile			*pile_init(int argc, char **argv);
t_pile			*pile_last(t_pile *pile);
t_pile			*pile_new(int value);
void			pile_show(t_pile *pile);
unsigned int	pile_special_case(int argc, char **argv);
int				pile_is_sort(t_pile *pile);
t_pile			*pile_before_last(t_pile *pile);
unsigned int	pile_size(t_pile *pile);

// OPERATION
void			do_swap(t_pile *pile);
void			do_push(t_pile **src, t_pile **dest);
void			do_rotate(t_pile **src);
void			do_rev_rotate(t_pile **src);
bool			do_move(t_pile **stack_a, t_pile **stack_b, char *move);

#endif