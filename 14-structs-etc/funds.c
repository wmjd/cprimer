//funds1.c passing struc members as args
#include <stdio.h>
#define FUNLEN 50

struct funds {
	char bank[FUNLEN];
	double bankfund;
	char save[FUNLEN];
	double savefund;
};

double sum(double, double);
double sum2(struct funds);
double sum3(struct funds *);

int main(void){
	struct funds stan = {
		"Garlic-Melon Banque",
		9999.99,
		"Lucky's Savings and Loan",
		1234.56
	};

	printf("Stan has a total of $%.2f.\n",
		sum(stan.bankfund, stan.savefund));

	printf("Stan has a total of $%.2f.\n",
		sum2(stan));

	printf("Stan has a total of $%.2f.\n",
		sum3(&stan));
	return 0;
}

double sum(double x, double y){
	return x+y;
}

double sum2(struct funds moolah){
	return  moolah.bankfund + moolah.savefund;
}

double sum3(struct funds * moolah){
	return moolah->bankfund + moolah->savefund;
}
