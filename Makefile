# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-alme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 22:32:51 by ede-alme          #+#    #+#              #
#    Updated: 2022/05/26 11:44:08 by ede-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 						----  My Makefile file  ----						   #
# -Version 0.1	-Stil complete some functions and rule to test main.c														   #

NAME = libft.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_itoa.c ft_putchar_fd.c \
			ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_putstr_fd.c \
			ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strmapi.c ft_substr.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_strjoin.c \
			ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c \
			ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c 
#   ft_strtrim.c ft_striteri.c 
#ft_putnbr_fd.c ft_putendl_fd.c   ft_split.c
#
OBJ = $(SOURCE:.c=.o)			

#BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c \
#ft_lstlast.c ft_lstdelone.c ft_lstclear.c
#B_OBJ = $(BONUS:.c=.o)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

bonus: $(B_OBJ)
	ar -rc $(NAME) $(B_OBJ)

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main bonus