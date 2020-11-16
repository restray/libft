NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_
D_OBJS = srcs
D_HEADER = includes
OBJS := ${patsubst %.c, ${D_OBJS}/%.o, ${SRCS}}
SRC_FOLDER := ${patsubst %.c, ${D_OBJS}/%.c, ${SRCS}}

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all :		${NAME}
	ar -crs ${OBJS}

${NAME} :	${OBJS}
	${CC} ${CFLAGS}	-o ${NAME} ${OBJS}

clean :
		rm -f ${OBJS}

fclean :	clean
		rm -f ${NAME}

re :		fclean all

${D_OBJS}/%.o : ${D_OBJS}/%.c
	${CC} ${CFLAGS} -I${D_HEADER} -c $< -o $@

.PHONY: all clean fclean re test
