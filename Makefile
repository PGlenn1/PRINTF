# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 12:24:01 by gpiriou           #+#    #+#              #
#    Updated: 2022/12/09 15:53:38 by glpiriou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRCS_LIST		= ft_printf.c ft_putnbr_count.c ft_putchar_count.c d_config.c c_print.c s_config.c p_print.c\
					x_print.c u_config.c percent_print.c ft_putnbr_count_ui.c parsing.c is_valid_format.c\


BONUS_LIST		= ft_printf_bonus.c ft_putnbr_count_bonus.c ft_putchar_count_bonus.c d_config_bonus.c c_print_bonus.c s_config_bonus.c p_print_bonus.c\
					x_print_bonus.c u_config_bonus.c percent_print_bonus.c ft_putnbr_count_ui_bonus.c parsing_bonus.c is_valid_format_bonus.c\

SRCS			= $(addprefix $(FOLDER)/, $(SRCS_LIST))

BONUS			= $(addprefix $(FOLDER)/, $(BONUS_LIST))

OBJS			= $(SRCS:.c=.o)

OBJS_BONUS		= $(BONUS:.c=.o)

OUT				= a.out

HEADER			= includes
FOLDER			= src

LIBFT 			= src/libft_upgraded

CC				= gcc
CFLAGS 			= -Wall -Wextra -Werror
RM				= rm -f

$(NAME):		$(OBJS)
				make -C $(LIBFT)
				cp src/libft_upgraded/libft.a ./$(NAME)
				ar -rcs $(NAME) $(OBJS)

all:			$(NAME)


%.o: %.c 
				$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

bonus:			$(NAME) $(OBJS_BONUS)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS) $(OUT) 
				make clean -C $(LIBFT)

fclean:			clean
				$(RM) $(NAME)
				make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re
