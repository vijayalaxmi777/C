//WAP to swap contents of 2 numbers without using temporary variable
#include<conio.h>
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter 1st number");
scanf("%d",&num1);
printf("Enter 2nd number");
scanf("%d",&num2);
printf("-------------- Before swapping -----------------\n");
printf("num1 = %d\n",num1);
printf("num2 = %d\n",num2);
// logic of swapping
num1=num1 + num2;
num2=num1 - num2;
num1=num1 - num2;
printf("--------------- After swapping -----------------\n");	
printf("num1 = %d\n",num1);
printf("num2 = %d\n",num2);
	getch();
	return 0;
}
