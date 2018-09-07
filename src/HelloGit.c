/*
 ============================================================================
 Name        : HelloGit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	signed char i = 0;

	printFunction(i);
	return EXIT_SUCCESS;
}

void printFunction(signed char i = 0)
{
	printf("%d print function!", i);
}
