#include <stdio.h>
#include "ch2.h"

int main(void){
	x1();
	x3();
	x4();
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

