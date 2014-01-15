# Simple Makefile example

HEADERS = point.h
SOURCES = movepoint.c main.c
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -std=c99

# Default target -- this gets executed when you type just "make" with no arguments
# Usually used to build everything in the current directory
all: main union

# Rule for separate compilation of source files, creating object files
# to be linked into executables later
%.o: %.c %.h
	echo "About to compile."
	$(CC) -c $(CFLAGS) $<

# Rule for linking objects into an executable
# To build main, run "make main" at the shell prompt
main: $(OBJECTS)
	echo "About to link."
	$(CC) -o $@ $(OBJECTS)

# Another rule for a different program, not using a variable for 
# the objects this time because I only have one
# To build the union example, run "make union" at the shell prompt
union: point.h union.o
	$(CC) -o $@ union.o

# Useful "phony" targets, i.e., not generating any files
clean: 
	echo "Cleaning up!"
	$(RM) $(OBJECTS) main

