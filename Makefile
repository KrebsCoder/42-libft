# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 21:36:25 by prafael-          #+#    #+#              #
#    Updated: 2021/09/03 13:25:41 by prafael-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES			=		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

OBJECTS			=		$(SOURCES:.c=.o)
NAME			=		libft.a

CC				=		clang

CFLAGS			=		-Wall -Wextra -Werror

all: $(NAME)
	make clean

$(NAME):$(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

$(OBJECTS):$(SOURCES)
	$(CC) $(CFLAGS) -c -I . $(SOURCES)

$(SOURCES):
	cp part1/ft_*.c .
	cp part2/ft_substr.c .
	cp part2/ft_strjoin.c .
	cp part2/ft_strtrim.c .
	cp part2/ft_split.c .

clean:
	rm -f $(OBJECTS)
	rm -f $(SOURCES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re