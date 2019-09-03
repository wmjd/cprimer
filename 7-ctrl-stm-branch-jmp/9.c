//user inputs pos int. program outputs all primes <= input 

#include <stdio.h>

int isPrime(int);

int main(void){
	
	int input;
	printf("Enter positive integer: ");
	scanf("%d", &input);

	for(int i=2; i<=input; i++){

		if(isPrime(i))
			printf("%d ", i);

	}
	printf("\n");

}

int isPrime(int n){
	for(int i=2; i*i<=n; i++){
		if(!(n%i))
			return 0;
	}
	return 1;
}
