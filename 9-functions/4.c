//harmonic mean of nums f,g: 1/avg(1/f,1/g)
#include <stdio.h>

double harmonic(float, float);

int main(void){

	printf("Harmonic mean of %f, %f = %f\n", 2.0, 3.0, harmonic(2.0,3.0));

	return 0;
}

double harmonic(float f, float g){

	return 1 / ((1/f) + (1/g) / 2);

}
