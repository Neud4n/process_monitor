# Makefile para compilar el proyecto "Monitor de procesos"
# Autor: d a n
CC = gcc
CFLAGS = -Wall -g -std=c99

# Archivos fuente y objeto
SRC = src/main.c src/monitor.c
OBJ = $(SRC:.c=.o)

TARGET = monitor

all: $(TARGET)

# Linking
$(TARGET): $(OBJ) # Para generar "monitor" deben existir "src/main.c src/monitor.c"
	$(CC) $(CFLAGS) -o $@ $^

# %@: Representa el nombre del target (monitor)
# $^: representa los archivos dependientes (main.o monitor.o)

# Compilacion
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) src/*.o