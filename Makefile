# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 13:52:48 by apercebo          #+#    #+#              #
#    Updated: 2021/11/19 15:40:40 by apercebo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlcat.c \
	ft_strncmp.c ft_atoi.c ft_strlcpy.c ft_strnstr.c ft_memchr.c \
	ft_memcmp.c ft_strdup.c ft_calloc.c ft_strjoin.c ft_substr.c ft_split.c \
	ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstclear.c \
		   ft_lstiter.c ft_lstmap.c

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS	= $(SRCBONUS:.c=.o)

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

%.o:		%.c libft.h
			${CC} ${CFLAGS} -I includes -c $< -o $@

${NAME}:	${OBJS}
			ar rcs $(NAME) $(OBJS)

all:		${NAME}

bonus:		${NAME} ${BONUS_OBJS} 
			ar rcs ${NAME} ${BONUS_OBJS}

clean:
			${RM} ${OBJS}
			${RM} ${BONUS_OBJS}
			
fclean:		clean
			${RM} ${NAME}

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all bonus clean fclean re rebonus
