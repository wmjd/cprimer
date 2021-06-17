#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct month {
	char name[16];
	char abv[4];
	int days;
	int num;
};

struct month year[12] = {
	{
		"January", "JAN", 31, 1
	}, {
		"February", "FEB", 28, 2
	}, {
		"March", "MAR", 31, 3
	}, {
		"April", "APR", 30, 4
	}, {
		"May", "MAY", 31, 5
	}, {
		"June", "JUN", 30, 6
	}, {
		"July", "JUL", 31, 7
	}, {
		"August", "AUG", 31, 8
	}, {
		"September", "SEP", 30, 9
	}, {
		"October", "OCT", 31, 10
	}, {
		"November", "NOV", 30, 11
	}, {
		"December", "DEC", 31, 12
	}
};

int daysthru(char * name){
	int found = 0;
	int total = 0;
	for(int i = 0; i<12; i++){
		if( !strcmp(name, year[i].name) ){
			found = 1;
			break;		
		}
		total += year[i].days; 
	/* order of the assignment-stm, and the if-stm above is swapped (comapred to 1.c); do not count days in month 'name' */
	}
	if(found)
		return total;
	else
		return -1;
}

int main(void){
	int day;
	char month[16];
	int year;

	printf("enter day of month: ");
	scanf("%d", &day);
	printf("enter month: ");
	scanf("%16s", month);
	printf("enter year: ");
	scanf("%d", &year);

	int answer = daysthru(month); //excludes the days in this month.
	answer += day;
	if( strcmp(month, "January") && strcmp(month, "February") ){ //strcmp returns nonzero when strings are different 
		if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)) ){
				answer += 1;
		}
	}
		
	printf("The number of days in the year %d through %s, %d: %d\n", year, month, day, answer);
	return 0;

}
