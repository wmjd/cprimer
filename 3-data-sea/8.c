#include <stdio.h>

int main(void){
	//in terms of cups:
	float pint = 2;
	float oz = 1.0/8.0;
	float tbl = oz/2.0;
	float tea = tbl/3.0;
	
	float user;
	printf("Enter a number of cups: ");
	scanf("%f", &user);
	printf("%f cups: %fpint, %foz, %ftbl, %ftea",
		user, pint, oz, tbl, tea); 
	
	return 0;
}
