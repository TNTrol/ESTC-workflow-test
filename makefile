CC=gcc
SOURCES= main.c vector/vector_3d.c
OBJECTS=$(SOURCES:.c=.o)
NAME=program

$(NAME): $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f $(OBJECTS) $(NAME)
