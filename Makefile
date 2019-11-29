TARGET = prog
LIBS = -lm
CC = gcc
CFLAGS = -Wall

PROGS = $(patsubst %.c, %.out, $(wildcard *.c))

default: $(TARGET)

%.out: %.c 
	$(CC) $(CFLAGS) $(LIBS) $< -o $@

$(TARGET): $(PROGS)

clean:
	-rm -f *.out
