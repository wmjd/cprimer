#include <stdio.h>
#include "ch2.h"

int main(void){
	x1();
	x3();
	x4();
	x6();
	x7(3);
	x8();
}

void x1(void){
	char x[] = "Gustav";
	char y[] = "Mahler";
	printf("%s %s\n", x, y);
	printf("%s\n%s\n", x, y);
	printf("%s %s\n", x, y);
}
void x3(void){
	int age = 10;
	int indays = 10*365;
	printf("%d years is %d days!!!\n", age, indays);
}
void x4(void){
	jolly(); jolly(); jolly(); deny();
}
void jolly(void){
	printf("For he's a jolly good fellow\n");
}
void deny(void){
	printf("Which nobody can deny\n");
}
void x6(void){
	int toes = 10;
	int twotoes = toes+toes;
	int toessq = toes * toes;
	printf("toes is %d. two toes is %d. toes squared is %d.\n", toes, twotoes, toessq);
}
void x7(int n){
	if(n){
		for(int i=n; i>0; i--)
			printf("Smile!");
		printf("\n");
		x7(n-1);
	}	
}
void x8(void){
	printf("starting:\n");
	one_three();
	printf("done\n");
}
void one_three(void){
	printf("one\n");
	two();
	printf("three\n");
}
void two(void){
	printf("two\n");
}

