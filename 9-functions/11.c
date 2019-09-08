//write fib using loop

#include <stdio.h>

int fib(int);

int main(void){

	for(int i=0; i<10; i++){
		printf("fib(%d) = %d", i, fib(i));
		putchar('\n');
	}

	return 0;
}

int fib(int n){
	int a = 0;
	int b = 1;
	int t;
	if(n == 0)
		return a;
	while(n>1){
		t = b;
		b += a;
		a = t;
		n--;
	}
	return b;
}
