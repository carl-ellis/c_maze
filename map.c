#include "map.h"
#include<stdlib.h>
#include<string.h>

// Constructs a map
map * map_create()
{
	// Get some heap for the map
	map* m = (map*)malloc(sizeof(map));

	// Makesure sane initial values
	m->ptr = 0;
	memset(m->data, 0, sizeof(m->data));
	return m;
}

// Destructs a map
void map_destroy(map *map)
{
	// Free from the heap
	free(map);
}

// Goes North
void map_north(map *map)
{
	// first check sure not at the top of the map
	if (map->ptr > MAP_LENGTH){

		// Scribe map on departure
		map_scribe(map, N);

		// Change position up a row
		map->ptr -= MAP_LENGTH;

		// Scribe map on arrival
		map_scribe(map, S);
	}
}

// Goes South
void map_north(map *map)
{
	// first check sure not at the top of the map
	if (map->ptr < MAP_SIZE-MAP_LENGTH){

		// Scribe map on departure
		map_scribe(map, S);

		// Change position up a row
		map->ptr += MAP_LENGTH;

		// Scribe map on arrival
		map_scribe(map, N);
	}
}

//TODO East and west based on MOD properties

// Scribes the bit value (via OR) to the map
void map_scribe(map *map, char dir)
{
	// bitwise OR the direction to the map data
	map->data[map->ptr] |= dir;
}

