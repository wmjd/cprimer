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
		total += year[i].days;
		if( !strcmp(name, year[i].name) ){
			found = 1;
			break;		
		}
	}
	if(found)
		return total;
	else
		return -1;
}

int main(void){
	char month[16];
	printf("enter month: ");
	scanf("%16s", month);
	printf("daysthru(\"%s\"): %d\n", month, daysthru(month));
	return 0;

}
