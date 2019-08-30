//ask user for number. sum all i^2 between 1 and number.

#include <stdio.h>

int main(void){
	int input;
	int sum = 0;
	printf("Enter n: ");
	scanf("%d", &input);
	for(int i = 1; i <= input; i++)
		sum += i*i;
	printf("the sum of counts that count to n = %d", sum);
	return 0;
}
