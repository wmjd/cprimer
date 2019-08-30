#include <stdio.h>
#define DAYWEEK 7

int main(void){
	int days;
	do {
		printf("Enter number of days: ");
		scanf("%d", &days);
		printf("%d days is %d week(s) and %d day(s)\n", 
			days, days / DAYWEEK, days % DAYWEEK); 
	} while (days > 0);	

	return 0;
}
