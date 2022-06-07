# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 17:42:50 by mtavares          #+#    #+#              #
#    Updated: 2022/06/07 22:27:38 by mtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

SRCS_B			=	ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.o \
					ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.o

NAME			=	libft.a

OBJS			=	$(SRCS:.c=.o)

OBJS_B			=	$(SRCS_B:.c=.o)

CC 				=	gcc

CFLAGS			=	-Wall -Werror -Wextra -I.

all:		$(NAME)

%.o:		%.c
		@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 	$(OBJS)
		@ar rcs $(NAME) $(OBJS)

b:		$(NAME) $(OBJS_B) $(OBJS)
		@ar rcs $(NAME) $(OBJS_B) $(OBJS)

clean:
		rm -f $(OBJS) $(OBJS_B)

fclean: 	clean
		rm -f $(NAME)

re:			fclean all

reb:	fclean b

.SILENT: all clean fclean re b reb %.o
.PHONY: all clean fclean re b reb
