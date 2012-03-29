/******************************************************************
* Create a 32x32 grid, then read in a file which gives directions *
* to a pointer which then 'draws' the file.                       *
******************************************************************/

#include<stdlib.h>
#include<stdio.h>

#define LU  "(0j(B"
#define LD  "(0k(B"
#define RD  "(0l(B"
#define RU  "(0m(B"
#define H   "(0q(B"
#define V   "(0x(B"
#define NL 	"\r\n"
#define B 	" "

/** Output a control character */
void output(char out[])
{
	printf("%s", out);
}

/* Test, print out some colours */
int main(int argc, char * argv[]) 
{

	output(B);
	output(B);
	output(RD);
	output(H);
	output(LD);
	output(NL);

	output(H);
	output(H);
	output(LU);
	output(B);
	output(B);

	return 0;
}
