CC 			= gcc
CFLAGS 	= -g

all: c_maze

c_maze: c_maze.o
	$(CC) $(LDFLAGS) -o $@ $^ 

c_maze.o: c_maze.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean: FRC
	rm -f c_maze c_maze.o

FRC:
