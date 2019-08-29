#include <stdio.h>

int main(void) {
	float mass_molecule =  3.0e-23; //grams
	float mass_quart = 950;

	//asks for number of quarts of water -> display num molecules
	float user;
	printf("Enter a number of quarts: ");
	scanf("%f", &user);
	printf("%f quarts is %f molecules of water!!", 
		user, (user*mass_quart)/mass_molecule);
	
	return 0;
}
