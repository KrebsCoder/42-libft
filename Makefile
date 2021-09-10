# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 21:36:25 by prafael-          #+#    #+#              #
#    Updated: 2021/09/09 19:01:08 by prafael-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES			=		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SOURCES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS			=		$(SOURCES:.c=.o)
OBJECTS_BONUS	=		$(SOURCES_BONUS:.c=.o)

NAME			=		libft.a

CC				=		clang

CFLAGS			=		-Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(OBJECTS) $(OBJECTS_BONUS)
	ar -rcs $(NAME) $(OBJECTS) $(OBJECTS_BONUS)

$(OBJECTS):$(SOURCES)
	$(CC) $(CFLAGS) -c -I . $(SOURCES)

bonus: $(OBJECTS_BONUS)
	$(CC) $(CFLAGS) -c -I . $(SOURCES_BONUS)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re copy bonus rebonus
