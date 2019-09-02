#include <stdio.h>

int main(void){
	
	for(int i=0; i<=('F'-'A');i++){
		for(int j=0;j<=i;j++){
			printf("%c", 'F'-j);		
		}
		printf("\n");
	}

	return 0;
}
