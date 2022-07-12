/*
 * conversion.c
 *
 *  Created on: Jul 11, 2022
 *      Author: helge
 */
#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	celsius = lower;
	printf("%9s %9s\n", "celsius", "fahr");
	while(celsius <= upper){
		fahr = 9.0 / 5.0 * celsius + 32;
		//celsius = (5.0/9.0) * (fahr-32.0);
		printf("%9.0f %9.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
