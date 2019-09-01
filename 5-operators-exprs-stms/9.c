/*user enters temp in F. program reads F as double, passes it to Temperatures(arg). This fun should calc the C temp and K tem, and displays all 3 temps with 2 decimals
C = 5.0/9.0(F-32).
K = C + 273.16.
Temperatures function should use const to create symbolic reps of the three constants. Main should use loop until user enter nonnumeric val. 
*/


#include <stdio.h>
void Temperatures(double);

int main(void){
	double F;
	while(1){
		printf("Enter a temp in F: ");
		if(!scanf("%lf", &F))
			break; //scanf return items read, 0 if !%f.
		Temperatures(F);	
	}
	printf("Bye.\n");
return 0;
}

void Temperatures(double F){
	const double C = (5.0/9.0) * (F-32);
	const double K = C + 273.16;
	printf("%.2lfF = %.2lfC = %.2lfK.\n", F, C, K); 
}

