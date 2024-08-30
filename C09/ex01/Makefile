CC=cc
HEADERS=./includes/
CFLAGS=-Wall -Wextra -Werror 
LIBCMDS=ar rc
LIB=ranlib

CFILES=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS=srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

BINARY=libft.a

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(LIBCMDS) $@ $^
	$(LIB) $(BINARY)

%.o:%.c
	$(CC) $(CFLAGS) -I $(HEADERS) -c -o $@ $^

fclean: clean
	rm -f $(BINARY)

clean:
	rm -f $(OBJECTS)

re: fclean all