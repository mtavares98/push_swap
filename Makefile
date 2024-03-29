# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 22:39:34 by mtavares          #+#    #+#              #
#    Updated: 2022/10/31 16:53:27 by mtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(foreach dir, $(SRCS_DIR), $(wildcard $(dir)/*.c))

SRCS_DIR	=	srcs

OBJS		=	$(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_DIR	=	objs

LIBFT		=	libs/libft/libft.a

PRINTF		=	libs/printf_fd/libprintf_fd.a

NAME		=	push_swap

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -g -fsanitize=address

RM			=	rm -rf

all:		$(NAME)

$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.c
		@mkdir -p $(OBJS_DIR)
		@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(LIBFT) $(PRINTF) $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
		@make -C libs/libft

$(PRINTF):
		@make -C libs/printf_fd

clean:
		$(RM) $(OBJS_DIR)
		make clean -C libs/libft
		make clean -C libs/printf_fd

fclean:		clean
		$(RM) $(NAME)
		make fclean -C libs/libft
		make fclean -C libs/printf_fd

re:			fclean all

.SILENT: all clean fclean re
.PHONY: all clean fclean re
