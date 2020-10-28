//1.WAP to print the number from 1 to 10 using while loop
#include<conio.h>
#include<stdio.h>
int main()
{
	int i=1;//initialization
	printf("-----Numbers-------\n");
	while(i<=10)
	{
		printf("\t%d\n",i);
		i++;	
	}	
	printf("----Loop ends-------");
	getch();
	return 0;
}
