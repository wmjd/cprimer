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
	do{
		printf("Enter cm: ");
		scanf("%f", &input);
		
		//this code makes sure that quotient is correct. it is.
		//printf("%f\n", ((input*CMIN) / FTIN));
		//printf("%d\n", (int) ((input*CMIN) / FTIN) );

		rawfeet = ((input*CMIN) / FTIN);
		qoutient = (int) rawfeet;
		remainder = (rawfeet - qoutient)*FTIN; 
		printf("%fcm = %dft, %fin\n",
			input, qoutient, remainder); 
		
	} while (input > 0);
	
	return 0;
}


