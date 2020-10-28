//WAP to find largest among 2 no's
#include<conio.h>
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the 1st number\n");	
	scanf("%d",&num1);
	printf("Enter the 2nd number\n");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("num1 i.e %d is largest",num1);
	}
	else
	{
		printf("num2 i.e %d is largest",num2);
	}
	getch();
	return 0;
}
