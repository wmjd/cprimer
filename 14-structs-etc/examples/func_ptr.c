// func_ptr.c uses function pointers
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void); //read thru end of line
void show(void (* fp)(char *), char * str);
void ToUpper(char *); 
void ToLower(char *);
void Transpose(char *); //transpose cases
void Dummy(char *); //leave string unaltered

int main(void){
	char line[LEN];
	char copy[LEN];
	char choice;
	void (*pfun)(char *);
	
	puts("Enter a string (empty line to quit):");
	while(s_gets(line,LEN) != NULL && line[0] != '\0')
	{
		while((choice = showmenu()) != 'n')
		{
			switch(choice)
			{
				case 'u': pfun = ToUpper; break;
				case 'l': pfun = ToLower; break;
				case 't': pfun = Transpose; break;
				case 'o': pfun = Dummy; break;
			}
			strcopy(copy, line); //make copy for show()
			show(pfun, copy); //use selected function
			puts("Enter a string (empty line to quit):");
		}
		puts("Bye!");
	}
	return 0;
}

char showmenu(void)
{
	char ans;
	puts("Enter menu choice:");
	puts("u) uppercase	l) lowercase");
	puts("t) transposed case	o) original case");
	puts("n) next string");
	ans = getchar(); //get response
	ans = tolower(ans); //convert to lowercase
	eatline();
	while(strchr("ulton", ans) == NULL)
	{
		puts("Please enter a u, l, t, o, or n:");
		ans = tolower(getchar());
		eatline();
	}
	return ans	
}

void eatline(void)
{
	while(getchar() != '\n')
		continue;
}

void ToUpper(char * str)
{

}

void ToLower(char * str)
{

}

void Transpose(char * str)
{
	while(*str)
	{
		if(islower(*str))
			*str = toupper(*str);
	}
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
