# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 02:18:36 by yabokhar          #+#    #+#              #
#    Updated: 2024/11/14 10:37:38 by yabokhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =    ft_atoi.c        \
            ft_bzero.c        \
            ft_calloc.c        \
            ft_isalnum.c    \
            ft_isalpha.c    \
            ft_isascii.c    \
            ft_isdigit.c    \
            ft_isprint.c    \
            ft_itoa.c        \
            ft_memchr.c        \
            ft_memcmp.c        \
            ft_memcpy.c        \
            ft_memmove.c    \
            ft_memset.c        \
            ft_putchar_fd.c    \
            ft_putendl_fd.c    \
            ft_putnbr_fd.c    \
            ft_putstr_fd.c    \
            ft_split.c        \
            ft_strchr.c        \
            ft_strdup.c        \
            ft_striteri.c    \
            ft_strjoin.c    \
            ft_strlcat.c    \
            ft_strlcpy.c    \
            ft_strlen.c        \
            ft_strmapi.c    \
            ft_strncmp.c    \
            ft_strnstr.c    \
            ft_strrchr.c    \
            ft_strtrim.c    \
            ft_substr.c        \
            ft_tolower.c    \
            ft_toupper.c

BNS        =    ft_lstadd_back.c    \
            ft_lstadd_front.c    \
            ft_lstclear.c        \
            ft_lstdelone.c        \
            ft_lstiter.c        \
            ft_lstlast.c        \
            ft_lstmap.c            \
            ft_lstnew.c            \
            ft_lstsize.c

OBJ_DIR =   .objects/

OBJS	=	${SRCS:%.c=${OBJ_DIR}%.o}

B_OBJS	=	${BNS:%.c=${OBJ_DIR}%.o}

HEAD	=	libft.h

NAME	=	libft.a

CC	=	cc

AR	=	ar -rc

FLAGS	=	-Wall -Wextra -Werror

all	:	${NAME}

${OBJS} :   ${OBJ_DIR}%.o : %.c ${HEAD} Makefile
	${CC} ${FLAGS} -c $< -o $@

${NAME}	:	${OBJ_DIR} ${OBJS} 
	${AR} ${NAME} ${OBJS}

${OBJ_DIR}  :
	mkdir -p ${OBJ_DIR}

bonus	:
	make SRCS="${SRCS} ${BNS}"

clean	:
	rm -rf ${OBJ_DIR} #${B_OBJS}

fclean	:	clean
	rm -f ${NAME} ${B_OBJS}

re	:	fclean all

.PHONY	:	all clean fclean re bonus
