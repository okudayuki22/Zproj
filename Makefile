CC = clang
GCC = gcc
FLAGS_CC = -std=c23
FLAGS_GCC = -std=c23
FILES = main.c

all:
	$(CC) $(FLAGS_CC) $(FILES) -o zproj

gcc:
	$(GCC) $(FLAGS_GCC) $(FILES) -o zproj