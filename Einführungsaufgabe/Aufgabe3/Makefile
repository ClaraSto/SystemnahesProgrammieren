CC=gcc
CFLAGS=

OBJ = Aufgabe3.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

Aufgabe3: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)