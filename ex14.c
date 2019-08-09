#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print(char args[]);

void print_args(int argc,char *argv[]){
	int i=0;
	for (int i = 0; i < argc; ++i)
	{
		print(argv[i]);
	}
}

void print(char args[]){
	int i=0;
	for (int i = 0; args[i]!='\0'; ++i)
	{
		char ch = args[i];
		if(can_print_it(ch)){
			printf("'%c'=='%d'",ch,ch );
		}
	}
	printf("\n");
}

int can_print_it(char ch){
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_args(argc,argv);
	return 0;
}
