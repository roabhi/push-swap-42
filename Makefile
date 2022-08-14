NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
SRC = src/utils/ps_stack_printer.c \
		src/utils/ps_element_printer.c \
		src/push_swap.c \
		src/ps_parser.c \
		src/ps_errors.c \
		src/ps_stacks_maker.c \
		src/movements/ps_push.c \
		src/movements/ps_rotate.c \
		src/movements/ps_reverse_rotate.c \
		src/movements/ps_swap.c 


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
