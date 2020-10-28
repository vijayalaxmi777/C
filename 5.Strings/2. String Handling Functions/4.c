//strlen()
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char name[10];
	int n;
	printf("Enter the string\n");
	gets(name);
	n=strlen(name);		//String function
	printf(" Length of the string is %d ",n);
	getch();
	return 0;
}
