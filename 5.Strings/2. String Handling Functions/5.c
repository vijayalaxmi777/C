//strcpy()
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char name[10],name1[20];
		printf("Enter the string\n");
	gets(name);
	printf("Enter the string\n");
	gets(name1);
		printf("name = %s\n",name);
		printf("name1 = %s\n",name1);	
	strcpy(name,name1);
	printf("--- name ----\n");
	puts(name);
	printf("--- name1 ----\n");
	puts(name1);
	getch();
	return 0;
}
