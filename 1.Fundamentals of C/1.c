//WAP to perform addition of 2 numbers
#include<conio.h>
#include<stdio.h>
int main()
{
	/*Declaring variables*/
	int num1,num2,result;
	/*Taking input from user*/
	printf("Enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	/*Calculating addition*/
	result= num1 + num2;
	/*Printing result*/
	printf("Addition = %d",result);
	getch();
	return 0;
}
