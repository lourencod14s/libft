# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldias-fe <ldias-fe@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 03:24:15 by ldias-fe          #+#    #+#              #
#    Updated: 2022/09/26 00:10:10 by ldias-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS 	= -Wall -Werror -Wextra

SRCS 	= ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c \
		ft_toupper.c\
		ft_tolower.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_strchr.c \
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strdup.c \
		ft_bzero.c  \
		ft_memset.c \
		ft_memmove.c\
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_calloc.c \
		ft_atoi.c   \
		ft_putchar_fd.c\
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c\
		ft_strjoin.c   \
		ft_substr.c	   \
		ft_itoa.c	   \
		ft_strmapi.c   \
		ft_striteri.c  \
		ft_strtrim.c   \
		ft_split.c 

OBJS 		= $(SRCS:.c=.o)

$(NAME): 	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
		cc $(FLAGS) -I. -c $(SRCS)

all:		$(NAME)

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re

