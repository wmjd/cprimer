#include <stdio.h>

int main(void){
	char buf[32];
	fgets("1", stdout);
	scanf("%s", buf);

	printf("%s",buf);

	return 0;

}
