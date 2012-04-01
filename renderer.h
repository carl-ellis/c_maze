#ifndef RENDERER
#define RENDERER

#include "map.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WN  	"(0j(B"
#define WS  	"(0k(B"
#define ES  	"(0l(B"
#define EN  	"(0m(B"

#define NESW  "(0n(B"

#define NES  	"(0t(B"
#define NSW  	"(0u(B"
#define NEW  	"(0v(B"
#define ESW  	"(0w(B"

#define WE  	"(0q(B"
#define NS  	"(0x(B"

#define NL 		"\r\n"
#define B 		" "

// Prints out the whole map
void renderer_render(map* map);

// Render a single character
void renderer_output_c(char out[]);



#endif
