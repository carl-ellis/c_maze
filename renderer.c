#include "renderer.h"

// Prints out the whole map
void renderer_render(map* map)
{
	// Variables
	int i; // Loop

	//Loop through the data and print depending upon values
	for(i = 0; i < MAP_SIZE	; i++)
	{
		// Depending on value, render different characters
		switch(map->data[i])
		{
			// Nothing
			case 0x00:
				renderer_output_c(B);
				break;
			// North and/or south
			case 0x01:
			case 0x04:
			case 0x05:
				renderer_output_c(NS);
				break;
			// West or East
			case 0x02:
			case 0x08:
			case 0x0A:
				renderer_output_c(WE);
				break;
			// North & East
			case 0x03:
				renderer_output_c(EN);
				break;
			// East & South
			case 0x06:
				renderer_output_c(ES);
				break;
			// North & East & South
			case 0x07:
				renderer_output_c(NES);
				break;
			// North & West
			case 0x09:
				renderer_output_c(WN);
				break;
			// North & East & West
			case 0x0B:
				renderer_output_c(NEW);
				break;
			// South & West
			case 0x0C:
				renderer_output_c(WS);
				break;
			// North & South & West
			case 0x0D:
				renderer_output_c(NSW);
				break;
			// South & East & West
			case 0x0E:
				renderer_output_c(ESW);
				break;
			// North & South & East & West
			case 0x0F:
				renderer_output_c(NESW);
				break;
			default:
				renderer_output_c(B);
				break;
		}

		//Handle new lines every row
		if (i%MAP_LENGTH == (MAP_LENGTH-1))
		{
			renderer_output_c(NL);
		}
	}
	// Final newline
	renderer_output_c(NL);
}


// Render a single character
void renderer_output_c(char out[])
{
	printf("%s", out);
}

