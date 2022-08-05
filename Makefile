NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
SRC = src/push_swap.c \
		src/ps_parser.c \
		src/ps_errors.c \
		src/ps_stacks_maker.c \
		src/ps_movements.c 


LIBFT = libft/libft.a
OBJ = $(SRC:.c=.o)

%.o:%.c
		${CC} ${CFLAGS} -I libft/ -c $< -o $@

all: makelibs ${NAME}

makelibs:
		make -C libft

${NAME}: ${OBJ} push_swap.h
			${CC} ${CFLAGS} -g -L libft/ -lft ${OBJ} -o ${NAME}

clean:
		${RM} ${OBJ}
		make clean -C libft
fclean:	clean
		${RM} ${NAME}
		make fclean -C libft

re: fclean all

.PHONY: all clean fclean makelibs
