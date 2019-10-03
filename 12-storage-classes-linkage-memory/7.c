//compile with diceroll.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void){
	int sets, dice, roll, sides, status;

	srand((unsigned int) time(0)); //randomize seed
	printf("Enter the number of sets, enter q to stop: ");

	while(scanf("%d", &sets) == 1 && sets > 0){
		printf("How many sides and dice? ");
		if((status = scanf("%d%d", &sides, &dice)) != 2){
			if(status == EOF)
				break;
			else{
				printf("You should have entered two ints.");
				printf(" Let's begin again.\n");
				while(getchar() != '\n')
					continue; //dispose of bad input
				printf("How many sets? Enter q to stop.\n");
				continue; //new loop cycle
			}
		}
		printf("Here are %d sets of %d %d-sided throws:\n",
			sets, dice,sides);
		for(int i=0; i<sets; i++){
			roll = roll_n_dice(dice, sides);
			printf("%d ", roll);
		}
		putchar('\n');
		printf("How many sets? Enter q to stop.\n");
	}
	printf("The rollem() function was called %d times.\n",
		roll_count); //use extern var
	printf("GOOD FORTUNE TO YOU!\n");

	return 0;
}
