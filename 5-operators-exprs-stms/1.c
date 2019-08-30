//convert minutes to hr:min and loop until user enters 0 or less

#include <stdio.h>
#define HOURMIN 60

int main(void){
	int min;
	do { 
		printf("Enter minutes: ");
		scanf("%d", &min);
		printf("%d minutes = %d hour(s) and %d minute(s)\n",
			min, min / HOURMIN, min % HOURMIN);
	} 
	while (min > 0);

	return 0;
}
