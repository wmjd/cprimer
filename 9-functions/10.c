//generalize tobin to tobase(n,b) for b 2-10

#include <stdio.h>

void tobase(int n, int b){

	if(n >= b){
		tobase(n/b,b);
	}
	putchar('0'+(n%b));

	return;
}

int main(void){
	for(int i = 1; i < 10; i++){
		printf("tobase(%d,2) = ", i);
		tobase(i,2);
		putchar('\n');
	}
	for(int i = 1; i < 10; i++){
		printf("tobase(%d,3) = ", i);
		tobase(i,3);
		putchar('\n');
	}
	for(int i = 1; i < 10; i++){
		printf("tobase(%d,8) = ", i);
		tobase(i,8);
		putchar('\n');
	}
	for(int i = 1; i < 10; i++){
		printf("tobase(%d,10) = ", i);
		tobase(i,10);
		putchar('\n');
	}
	return 0;
}






/* * * * * * * * * * * * * * */
void tobin(unsigned long n){
	
	int r;
	r = n%2;
	if(n>=2)
		tobin(n/2);
	putchar(r == 0 ? '0' : '1');

	return; 

}
