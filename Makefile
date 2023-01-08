# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 10:54:33 by gabrielduha       #+#    #+#              #
#    Updated: 2023/01/08 21:20:51 by rukkyaa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= pile/pile_add_back.c pile/pile_add_front.c pile/pile_before_last.c \
			pile/pile_clear.c pile/pile_get_at.c pile/pile_get_index.c \
			pile/pile_get_max.c pile/pile_get_min.c pile/pile_init.c \
			pile/pile_is_sort.c pile/pile_last.c pile/pile_new.c \
			pile/pile_show.c pile/pile_size.c pile/pile_check_duplicate.c \
			pile/pile_special_case.c sort/get_nb_moves.c sort/sort_2.c \
			sort/sort_3.c sort/cost.c utils/ft_atoi.c utils/operations.c \
			main.c mediane.c push_swap.c
OBJS	= $(SRCS:.c=.o)
NAME	= push_swap
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
HEADERS = -I includes/
# LIBFT = -L libft/ -lft

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(HEADERS) -o $(NAME)

all: $(NAME)

clean:
			$(RM) $(OBJS)

fclean:	clean
			$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re