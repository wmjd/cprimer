// 8-elt array containing successive powers of 2 from 2^0. print it with do-while

#include <stdio.h>

int pow2(int);

int main(void){

	int pow[8];
	for(int i = 0; i < 8; i++){
		pow[i] = pow2(i);
	}
	int j = 0;
	do{
		printf("%d ", pow[j++]);
	} while (j < 8);

	return 0;
}

int pow2(int i){
	if(!i)
		return 1;
	return 2*pow2(i-1); 
}
