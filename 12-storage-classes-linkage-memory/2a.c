#include <stdio.h>

static int mode;
static float dist;
static float fuel;

void set_mode(int m){
	mode = m;
}

void get_info(void){
	if(mode == 0){
		printf("Enter distance traveled in kilometers: ");
		scanf("%f", &dist);
		printf("Enter fuel consumed in gallons: ");
		scanf("%f", &fuel);
	}else if(mode == 1){
		printf("Enter distance traveled in miles: ");
		scanf("%f", &dist);
		printf("Enter fuel consumed in liters: ");
		scanf("%f", &fuel);
	}
}

void show_info(void){
	if(mode == 0){
		printf("Fuel consumption is %f miles per gallon.\n", 
			dist/fuel);

	}else if(mode == 1){
		printf("Fuel consumption is %f liters per 100km.\n",
			(fuel/dist)*100);

	}
}
