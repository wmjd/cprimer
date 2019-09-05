/*
 * reads input until EOF. Reports num upper, lower, other chars
*/

#include <stdio.h>

int main(void){

	int c;
	int up = 0;
	int low = 0;
	int nonalpha = 0;

	while((c=getchar()) != EOF){

		if(c >= 'a' && c <= 'z')
			low++;
		else if(c >= 'A' && c <= 'Z')
			up++;
		else
			nonalpha++;		
	
	}	

	printf("Encountered %d uppercase, %d lowercase, %d other chars.\n",
			up, low, nonalpha);

	return 0;
}
