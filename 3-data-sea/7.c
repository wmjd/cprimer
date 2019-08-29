#include <stdio.h>

int main(void){
	float in_to_cm = 2.54;
	float user;
	printf("Enter inches: ");
	scanf("%f", &user);
	printf("%fin = %fcm", user, user*in_to_cm); 

	return 0;
}
