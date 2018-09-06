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

	for (i = 0; i < 255; i++) {
		printf("%d: !!!Hello World!!!\n", i); /* prints !!!Hello World!!! */
	}
	return EXIT_SUCCESS;
}
