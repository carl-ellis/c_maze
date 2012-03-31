#ifndef C_MAZE_MAP
#define C_MAZE_MAP

#define MAP_SIZE 1024 // 32x32 map
#define MAP_LENGTH 32 

// For bit setting
#define N 0x01
#define E 0x02
#define S 0x04
#define W 0x08

/* defines the map data structure.

  ptr: current map position
	data: map data!

	directions which have been travelled are 1,2,4,8 and by 
	setting bits we cna have multiple passes.
*/
typedef struct t_map
{
	int ptr;
	char data[MAP_SIZE];
} map;

// Constructs a map
map * map_create();

// Destructs a map
void map_destroy(map* map);

// Goes North
void map_north(map *map);

// Goes East
void map_east(map *map);

// Goes South
void map_south(map *map);

// Goes West
void map_west(map *map);

// Scribes the bit value (via OR) to the map
void map_scribe(map *map, char dir);

#endif
