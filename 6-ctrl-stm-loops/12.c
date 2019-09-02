/* compute both series to some limit
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 ...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 ...
*/

#include <stdio.h>

float a(int);
float b(int);

int main(void){
	int lim = 1000000;
	printf("Series A: %f\n", a(lim));
	printf("Series B: %f\n", b(lim));

	return 0;
}

float a(int lim){
	float acc = 0;
	for(int i=1; i<=lim; i++){
		acc += 1.0/i;
	}
	return acc;
}

float b(int lim){
	float acc = 0;
	for(int i=1; i<=lim; i++){
		acc += (i & 1) ? (1.0/i) : (-1.0/i); 
	}
	return acc;
}
