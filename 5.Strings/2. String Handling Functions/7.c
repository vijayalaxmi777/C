//strcmp()
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char name[20],name1[20];
	int a;
	printf("Enter the 1st string\n");
	gets(name);
	printf("Enter the 2nd string\n");
	gets(name1);
		printf("name = %s\n",name);
		printf("name1 = %s\n",name1);
	a=strcmp(name,name1);			//string function
	printf("value=%d",a);
	getch();
	return 0;
}
