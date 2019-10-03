#include "3a.h"
void io(int mode){
	float dist;
	float fuel;
	if(mode == 0){
		printf("Enter distance traveled in kilometers: ");
		scanf("%f", &dist);
		printf("Enter fuel consumed in liters: ");
		scanf("%f", &fuel);
	}else if(mode == 1){
		printf("Enter distance traveled in miles: ");
		scanf("%f", &dist);
		printf("Enter fuel consumed in gallons: ");
		scanf("%f", &fuel);
	}
	show_info(mode, dist, fuel);
}

void show_info(int mode, float dist, float fuel){
	if(mode == 1){
		printf("Fuel consumption is %f miles per gallon.\n", 
			dist/fuel);

	}else if(mode == 0){
		printf("Fuel consumption is %f liters per 100km.\n",
			(fuel/dist)*100);

	}
}
