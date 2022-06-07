# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 22:39:34 by mtavares          #+#    #+#              #
#    Updated: 2022/06/07 23:54:41 by mtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(foreach dir,$(SRCS_DIR),$(wildcard $(dir)/*.c))

SRCS_DIR	=	srcs

OBJS		=	$(subst $(SRCS_DIR),$(OBJS_DIR),$(SRCS:.c=.o))

OBJS_DIR	=	objs

LIBFT		=	libs/libft/libft.a

PRINTF		=	libs/printf/libftprintf.a

INCLUDE		=	-I include/push_swap.h

NAME		=	push_swap

CC			=	clang

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -rf

all:		$(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.c
		@mkdir -p $(OBJS_DIR)
		@$(CC) $(CFLAGS) $() -c $< -o $@

$(NAME):	$(LIBFT) $(PRINTF) $(OBJS)
		@$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
		@make b -C libs/libft

$(PRINTF):
		make -C libs/printf

clean:
		$(RM) $(OBJS_DIR)
		make clean -C libs/libft
		make clean -C libs/printf

fclean:		clean
		$(RM) $(NAME)
		make fclean -C libs/libft
		make fclean -C libs/printf

re:			fclean all

.SILENT: all clean fclean re
.PHONY: all clean fclean re 