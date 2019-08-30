//asks for an int then prints all ints ranging 10 higher

#include <stdio.h>

int main(void){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i = 0; i <= 10; i++)
		printf("%d\n", n++);
	return 0;
}
