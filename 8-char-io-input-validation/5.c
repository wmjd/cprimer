//this program works ok but i need to flush the buffer. read more.

//modify the guessing prog from listing 8.4. user picks 1-100..

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int min = 1.0;
	int max = 100.0;
	int guess = 50.0;
	int c;

	printf("Pick number 1-100. I will guess it."
		"Respond l or h or y \n");
	printf("I guess %d is my guess y h or l?\n", guess);
	
	while((c=getchar()) != 'y'){
		
		if(max == min){
			printf("You're a fucking liar!");
			return 1;
		}
		if(c == 'l'){
			min = guess;
			guess = (guess + max) / 2 ;
		}else if(c == 'h'){
			max = guess;
			guess = (guess + min) / 2;
		}
		printf("I guess %d is my guess y h or l?\n", guess);
		
		//flush buffer
		while(getchar() != '\n')
			;
	}
	printf("I guessed your number %d!", guess);
	return 0;
}
