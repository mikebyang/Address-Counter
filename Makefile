C = gcc
Cflags = -Wall -Werror -fsanitize=address -g
all: count
count: count.c count.h
	$(C) $(Cflags) count.c -o count
clean:
	rm -rf count
