CFLAGS = -Wall -Wextra -Wextra

TARGET = rush-02
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

%.o: %.c
	gcc $(CFLAGS) -c $< -o  $@ -I rush02.h

$(TARGET): $(OBJS)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
