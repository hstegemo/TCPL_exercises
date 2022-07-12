/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: helge
 */
#include <stdio.h>

int main(){
	int c;
	printf("write a letter\n");
	c = getchar();
	if(c != EOF){
		printf("C != EOF is 1");
	} else {
		printf("C != EOF is 0");
	}

	printf("\nEOF = %d\n", EOF);
}
