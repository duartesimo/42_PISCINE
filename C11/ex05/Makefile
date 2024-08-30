CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
BINARY=do-op

HEADERS=./includes/
CFILES=./srcs/calc.c ./srcs/coolfuncs.c ./srcs/do_op.c
OBJECTS=./srcs/calc.o ./srcs/coolfuncs.o ./srcs/do_op.o


all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -I $(HEADERS) -c -o $@ $^

fclean: clean
	$(RM) $(BINARY)

clean:
	$(RM) $(OBJECTS)

re: fclean all