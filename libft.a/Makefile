# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 12:34:38 by lagarcia          #+#    #+#              #
#    Updated: 2022/05/05 12:29:35 by lagarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \

NAME = libft.a
OBJECTS = ${SRC:.c=.o}
OBJECTS_B = ${SRC_BONUS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

bonus:  ${OBJECTS_B}
	$(AR) ${NAME} ${OBJECTS_B}
	
%.o : %.c
	gcc -c $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECTS) $(OBJECTS_B)
	
fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean fclean re all bonus