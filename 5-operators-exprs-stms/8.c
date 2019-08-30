#include <stdio.h>

int main(void){
	int base, arg1;

	printf("Enter base: ");
	scanf("%d", &base);

	while(1){
		printf("Enter arg: ");
		scanf("%d", &arg1);
		if(arg1<=0) break;
		printf("%d %% %d = %d\n", 
			arg1, base, arg1 % base); 
	} 
	
	return 0;
}
