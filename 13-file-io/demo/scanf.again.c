#include <stdio.h>
#define isdigit(c) (c <= '9' && c >= '0') ? 1 : 0

int main(void){
	int val;
	int ret; 
	do{
		ret = scanf("%d", &val);
		if(!ret){
			while(!isdigit(getchar()))
				;
			ungetc(ret, stdin);
		}
		printf("%d\n", ret);
	} while(val >= 0 );
}
