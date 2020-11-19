NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
D_OBJS = srcs
D_HEADER = includes
OBJS := ${patsubst %.c, ${D_OBJS}/%.o, ${SRCS}}
SRC_FOLDER := ${patsubst %.c, ${D_OBJS}/%.c, ${SRCS}}

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all :		${NAME}

${NAME} :	${OBJS}
	ar -crs ${NAME} ${OBJS}

clean :
		rm -f ${OBJS}

fclean :	clean
		rm -f ${NAME}

re :		fclean all

${D_OBJS}/%.o : ${D_OBJS}/%.c
	${CC} ${CFLAGS} -I${D_HEADER} -c $< -o $@

.PHONY: all clean fclean re test
