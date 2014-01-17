# Simple Makefile example

SOURCES = movepoint.c main.c
OBJECTS = $(SOURCES:.c=.o)

STRSRCS = mystring.c stringtest.c
STROBJS = $(STRSRCS:.c=.o) 

CC = gcc
CFLAGS = -std=c99

# Default target -- this gets executed when you type just "make" with no arguments
# Usually used to build everything in the current directory
all: main fptr stringtest

# Rule for separate compilation of source files, creating object files
# to be linked into executables later
%.o: %.c %.h
	echo "About to compile."
	$(CC) -c $(CFLAGS) $<
	
# Rules for building the executable programs
main: $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)

fptr: fptr.o
	$(CC) -o $@ fptr.o

stringtest: $(STROBJS)
	$(CC) -o $@ $(STROBJS)

# Useful "phony" targets, i.e., not generating any files
clean: 
	echo "Cleaning up!"
	$(RM) $(OBJECTS) main fptr

