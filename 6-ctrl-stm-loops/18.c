#include <stdio.h>

//int friends_aux(int, int);
void friends(int,int);

int main(void){

	friends(0,5);

	return 0;
}

void friends(int week, int count){	
	printf("After %d weeks, %d friends\n", week, count);
	if(count>=150){
		; //fall-through function
	}
	else
		friends(week+1, 2*(count-(week+1)) );  

}


