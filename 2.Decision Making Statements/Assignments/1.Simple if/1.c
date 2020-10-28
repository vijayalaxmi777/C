//WAP to check whether number is even or odd
#include<conio.h>
#include<stdio.h>
int main()
{
	int no;
	printf("Enter the no");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("Even");
	}
	if(no%2==1)
	{
		printf("Odd");
	}
	getch();
	return 0;
}
