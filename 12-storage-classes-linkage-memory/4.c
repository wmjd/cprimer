#include <stdio.h>
int f(void){
	static int f = 0;
	return ++f;
}

int main(void){
	for(int x =0; x<10;x++){
		printf("%d",f());
	}
}
