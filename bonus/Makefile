# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 10:54:33 by gabrielduha       #+#    #+#              #
#    Updated: 2023/01/09 00:25:40 by rukkyaa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= gnl/get_next_line_bonus.c gnl/get_next_line_utils_bonus.c \
			pile/pile_add_back.c pile/pile_before_last.c \
			pile/pile_check_duplicate.c pile/pile_clear.c pile/pile_init.c \
			pile/pile_is_sort.c pile/pile_last.c pile/pile_new.c \
			pile/pile_show.c pile/pile_size.c pile/pile_special_case.c \
			utils/ft_atoi.c utils/ft_strcmp.c utils/operations.c do_op.c \
			errors.c main.c
OBJS	= $(SRCS:.c=.o)
NAME	= checker
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