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
	upper = 300;
	step = 20;

	fahr = lower;
	printf("%9s %9s\n", "fahr", "celsius");
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%9.0f %9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
