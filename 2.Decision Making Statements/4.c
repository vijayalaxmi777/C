//WAP to print day according to the number entered by the user: else if
#include<conio.h>
#include<stdio.h>
int main()
{
	int day;
	printf("Enter the day in number");
	scanf("%d",&day);
	 if(day==1)
	{
		printf("sunday");
	}
	else if(day==2)
	{
		printf("monday");
	}
	else if(day==3)
	{
		printf("tuesday");
	}
	else if(day==4)
	{
		printf("wednesday");
	}
	else if(day==5)
	{
		printf("thursday");
	}
	else if(day==6)
	{
		printf("friday");
	}
	else if(day==7)
	{
		printf("saturday");
	}
	else
		printf("Enter the number between 1 to 7");
	
	getch();
	return 0;
}
