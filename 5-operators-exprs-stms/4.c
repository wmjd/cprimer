//asks user for cm and stdout gets both cm and feet. loops until nonpos input


//keep everything an int until the end
#include <stdio.h>
#define FTIN 12 //feet in inches
#define CMIN 1/2.54 //cm in inches

int main(void){
	float input;
	float rawfeet;
	float remainder;
	int qoutient;
 	while (1){
		printf("Enter cm: ");
		scanf("%f", &input);
		if (input <= 0) break;
		rawfeet = ((input*CMIN) / FTIN);
		qoutient = (int) rawfeet;
		remainder = (rawfeet - qoutient)*FTIN; 
		printf("%fcm = %dft, %fin\n",
			input, qoutient, remainder); 
	}
	return 0;
}


