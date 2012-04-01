/******************************************************************
* Create a 32x32 grid, then read in a file which gives directions *
* to a pointer which then 'draws' the file.                       *
******************************************************************/

#include<stdlib.h>
#include<stdio.h>
#include "map.h"
#include "renderer.h"

/* Test, print out some colours */
int main(int argc, char * argv[]) 
{
	// Check the correct number of arguments are passed
	if (argc < 2)
	{
		printf("Usage: c_maze FILEIN\r\n");
		return 0;
	}

  // variable for the random number
	int r;
	// variable for the loop
	int i;
	// File ptr
	FILE * fptr;
	// Read byte
	int read_in;

	// Create the map
	map * m = map_create();

	// Open the file
	if(!(fptr = fopen(argv[1], "rb")))
	{
		printf("[Error] File not found \r\n");
		return -1;

	}

	while ((read_in = fgetc(fptr)) != EOF)
	{
		r = read_in/(0xff/4);

		switch(r)
		{
			case 0:
				map_north(m);
				break;
			case 1:
				map_east(m);
				break;
			case 2:
				map_south(m);
				break;
			case 3:
				map_west(m);
				break;
		}
	}
	printf("\r\n");

	// Close file
	fclose(fptr);

	renderer_render(m);

	map_destroy(m);


	return 0;
}
