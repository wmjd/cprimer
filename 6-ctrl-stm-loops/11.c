//read 8 ints into array and print them in rev

#include <stdio.h>

int main(void){

	int ints[8];
	printf("Enter 8 ints. . .\n");
	for(int i=0; i<8; i++)
		scanf("%d", ints+i);
	for(int i=7; i >= 0; i--)
		printf("%d ", ints[i]);

	return 0;
}
