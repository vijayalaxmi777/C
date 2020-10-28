//strcat()
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char name[20],name1[20];
	printf("Enter the 1st string\n");
	gets(name);
	printf("Enter the 2nd string\n");
	gets(name1);
		printf("name = %s\n",name);
		printf("name1 = %s\n",name1);
	strcat(name,name1);			//string function
	printf("--- name ----\n");
	puts(name);
	printf("--- name1----\n");
	puts(name1);
	getch();
	return 0;
}
