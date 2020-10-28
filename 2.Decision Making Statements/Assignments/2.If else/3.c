//WAP to check whether the entered number is divisible by 7 or not
#include<conio.h>
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the no\n");
	scanf("%d",&num);
	if(num%7==0)
	{
		printf("%d is divisible by 7",num);
	}
	else
	{
		printf("%d is not divisible by 7",num);
	}
	getch();
	return 0;
}
