//convert inches to cm (1:2.54). cli prompts user to enter a number and outputs converted 

#include <stdio.h>

int main(void){
	float n;
	printf("Enter a number to convert from in -> cm: ");
	scanf("%f", &n);
	printf("%fin = %fcm\n", n, 2.54*n); 
}
