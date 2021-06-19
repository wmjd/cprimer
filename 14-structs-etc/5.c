#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 64
#define CSIZE 4
#define NUMGRADES 3

struct Name {
	char first[LEN];
	char last[LEN];
};
struct Student {
	struct Name name;
	float grades[NUMGRADES];
	float avg;
};

// gets user input for all three grades for each student
void getscores(struct Student * students, int numstudents){
	for(int i=0; i<numstudents; i++){
		for(int j=0; j<NUMGRADES; j++){
			printf("Enter score #%d for %s %s: ", 1+j, students[i].name.first,
				students[i].name.last);
			scanf("%f", &students[i].grades[j]);
		}
	}
}

// computes average of the three grades for each student
void getavgs(struct Student * students, int numstudents){
	for(int i=0; i<numstudents; i++){
		float total = 0;
		for(int j=0; j<NUMGRADES; j++){
			total += students[i].grades[j];
		}
		students[i].avg = total / NUMGRADES;
	}
}

// display the info in the array of type struct Student
void display(struct Student * students, int numstudents){
	for(int i=0; i<numstudents; i++)
		printf("%s %s: %f %f %f -> %f\n", students[i].name.first, students[i].name.last,
			students[i].grades[0], students[i].grades[1], students[i].grades[2], students[i].avg);
	
}

// show the overall class average for the class
void overall(struct Student * students, int numstudents){
	float total = 0;
	for(int i=0; i<numstudents; i++)
		total += students[i].avg;
	printf("The average grade in the class is %f\n", total / numstudents);
}


int main(void){
	struct Student students[CSIZE] = {
		{.name = {"Bob", "Smith"}},
		{.name = {"Jane", "Dough"}},
		{.name = {"Mustafah", "Peroit"}},
		{.name = {"Jiminy", "Cricket"}}
	};
	getscores(students, CSIZE);
	getavgs(students, CSIZE);
	display(students, CSIZE);
	overall(students, CSIZE);

	exit(0);
}
