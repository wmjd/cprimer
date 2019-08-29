#include <stdio.h>

int main(void) {
	char first[80];
	char last[80];

	printf("Enter first name: ");
	scanf("%s", first);
	printf("Enter last name: ");
	scanf("%s", last);
	printf("%s, %s", last, first);

	return 0;
}
