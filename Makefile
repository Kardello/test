CC ?= gcc
CFLAGS = -Wall -Wextra -O2
TARGET = example

all: $(TARGET)

$(TARGET): example.o
	$(CC) $(CFLAGS) -o $(TARGET) example.o

example.o: example.c
	$(CC) $(CFLAGS) -c example.c

clean:
	rm -f $(TARGET) example.o