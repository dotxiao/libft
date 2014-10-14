CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = libft.a


all:
		make -C io
		make -C str
		make -C table
		make -C misc
		make -C math
		ar -rv libft.a io/ft_putchar.o

clean:
		rm -rf *.o
		make -C io clean
		make -C str clean
		make -C table clean
		make -C math clean
