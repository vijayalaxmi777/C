//WAP to check whether given number is divisible by 2 or 7 or both : nested if
#include<conio.h>
#include<stdio.h>
int main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	if(no%2==0)
	{
		if(no%7==0)
		{
			printf("Number is divisible by both ");
		}
		else
		{
			printf("Number is divisible by 2 only");
		}
	}
	else
	{
		if(no%7==0)
		{
			printf("Number is divisible by 7 only");
		}
		else
		{
			printf("Number is neither divisible by 2 nor by 7");
		}
	}
	getch();
	return 0;
}
