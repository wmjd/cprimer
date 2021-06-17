#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * s_gets(char * st, int n);
#define NLEN 30
#define SLEN 81
struct namect {
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};
struct namect3{
	char * fname;
	char * lname;
	int letters;
};


void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);

struct namect getinfo2(void);
struct namect makeinfo2(struct namect);
void showinfo2(struct namect );

void getinfo3(struct namect3 *);
void makeinfo3(struct namect3 *);
void showinfo3(const struct namect3 *);
void cleanup3(struct namect3 *);

int main(void){
	struct namect person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);

	struct namect person2;
	person2 = getinfo2();
	person2 = makeinfo2(person2);
	showinfo2(person2);

	struct namect3 person3;
	getinfo3(&person3);
	makeinfo3(&person3);
	showinfo3(&person3);
	cleanup3(&person3);

	return 0;
}

void getinfo(struct namect * pst){
	printf("Please enter your first name.\n");
	s_gets(pst->fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(pst->lname, NLEN);
}
void makeinfo(struct namect * pst){
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}
void showinfo(const struct namect *pst){
	printf("%s %s, your name contains %d letters.\n",
		pst->fname, pst->lname, pst->letters);
}

struct namect getinfo2(void){
	struct namect temp;
	printf("Pleaser enter first name: \n");
	s_gets(temp.fname, NLEN);
	printf("Please enter last name: \n");
	s_gets(temp.lname, NLEN);
	return temp;
}
struct namect makeinfo2(struct namect info){
	info.letters = strlen(info.fname) + strlen(info.lname);
	return info;
}
void showinfo2(struct namect info){
	printf("%s %s, your name contains %d letter. \n",
		info.fname, info.lname, info.letters);
}

void getinfo3(struct namect3 * pst){
	char temp[SLEN];
	printf("Please enter first name.\n");
	s_gets(temp, SLEN);
	pst->fname = (char *) malloc(strlen(temp) + 1);
	strcpy(pst->fname, temp);
	printf("please enter last name.\n");
	s_gets(temp, SLEN);
	pst->lname = (char *) malloc(strlen(temp) +1);
	strcpy(pst->lname, temp);
}
void makeinfo3(struct namect3 * pst){
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}
void showinfo3(const struct namect3 * pst){
	printf("%s %s, your name contains %d letters.\n",
		pst->fname, pst->lname, pst->letters);
}
void cleanup3(struct namect3 * pst){
	free(pst->fname);
	free(pst->lname);
}

//s_gets strips newline chars that fgets() usually stores in the string
char * s_gets(char * st, int n){
	char * ret_val;
	char * find;
 
	ret_val = fgets(st, n, stdin);

	if(ret_val){
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}

	return ret_val;
}
