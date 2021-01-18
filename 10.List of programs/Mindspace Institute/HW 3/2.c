//WAP to find leap year
#include<conio.h>
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0)&&(year%100!=0))
		printf("Its leap year");
	else
		printf("Its not leap year");	
	getch();
	return 0;
}
