# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 12:24:01 by gpiriou           #+#    #+#              #
#    Updated: 2021/03/23 12:52:57 by gpiriou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS_LIST		= ft_printf.c

SRCS			= $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS			= ${SRCS:.c=.o}

OUT				= a.out

HEADER			= includes
FOLDER			= src

LIBFT 			= src/libft_upgraded

CC				= gcc
CFLAGS 			= -Wall -Wextra -Werror
RM				= rm -f

all:			${NAME}

$(NAME):		${OBJS}
				@make -C $(LIBFT)
				@cp src/libft_upgraded/libft.a ./$(NAME)
				@ar -rcs ${NAME} ${OBJS}

%.o: %.c
				@${CC} ${CFLAGS} -I ${HEADER} -o $@ -c $<

clean:
				@${RM} ${OBJS} ${OUT} 
				@make clean -C $(LIBFT)

fclean:			clean
				@${RM} ${NAME}
				@make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re
