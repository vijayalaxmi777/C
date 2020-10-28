//strlwr()
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char name[19];
	printf("Enter the string\n");
	gets(name);
	printf("------------------ Before function -------------------\n");
	puts(name);
	strlwr(name);		//string function
	printf("------------------ After function --------------------\n");
	puts(name);
	getch();
	return 0;
}
