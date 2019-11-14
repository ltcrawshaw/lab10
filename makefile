CC = gcc
CFLAGS = -m32 
LDFLAGS = -m32

lab8:	lab8.c data.h
		$(CC) $(CFLAGS) lab8.c phrase.o -o lab8

.PHONY: clean
clean:
		rm -f lab8
