#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 128
#define NPLAYERS 18

struct PlayerStats {
	char first[LEN];
	char last[LEN];
	int bats;
	int hits;
	int walks;
	int RBI;
	float avg;
};

int main(void){
	FILE * fp = fopen("softball.txt", "r");

	int number;
	char first[LEN];
	char last [LEN];
	int bats;
	int hits;
	int walks;
	int RBI;


	struct PlayerStats Roster[NPLAYERS];
	memset(Roster, 0, sizeof(Roster));
	
	while( fscanf(fp, "%d %s %s %d %d %d %d", &number, first, last,
		&bats, &hits, &walks, &RBI) == 7)
	{
		if( ! *Roster[number].first)
		{
			strcpy(Roster[number].first, first);
			strcpy(Roster[number].last, last);
		}
		Roster[number].bats += bats;
		Roster[number].hits += hits;
		Roster[number].walks += walks;
		Roster[number].RBI += RBI;

	}
	for(int i=0; i < NPLAYERS ; i++){
		if( ! *Roster[i].first){
			//printf("There is no number %d on the roster.\n", i);
			continue;
		} else {
			Roster[i].avg = (float) Roster[i].hits / Roster[i].bats;
		}
	}

	for(int i=0; i<NPLAYERS; i++)
		if(*Roster[i].first)
			printf("%d %s %s %d %d %d %d %f\n", i, Roster[i].first, Roster[i].last,
				Roster[i].bats, Roster[i].hits, Roster[i].walks, Roster[i].RBI, Roster[i].avg);
}


