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
  // variable for the random number
	int r;
	// variable for the loop
	int i;

	map * m = map_create();

	for(i = 0; i< 1000; i++)
	{
		r = rand() % 4;
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

	renderer_render(m);

	map_destroy(m);


	return 0;
}
