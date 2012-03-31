CC 			= gcc
CFLAGS 	= -g

all: c_maze

c_maze: c_maze.o map.o
	$(CC) $(LDFLAGS) -o $@ $^ 

c_maze.o: c_maze.c
	$(CC) $(CFLAGS) -c -o $@ $<

map.o: map.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean: FRC
	rm -f c_maze *.o

FRC:
