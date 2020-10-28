//strupr()
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char name[10];
	printf("Enter the string\n");
	gets(name);
	printf("------------------ Before function -------------------\n");
	puts(name);
	strupr(name);			//string function
	printf("------------------ After function --------------------\n");
	puts(name);
	getch();
	return 0;
}
