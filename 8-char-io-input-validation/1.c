//count chars in input to EOF

#include <stdio.h>

int main(void){

	int c = 0;
	while(getchar() != EOF)
		c++;
	printf("Char count of input: %d\n", c);	

	return 0;
}
