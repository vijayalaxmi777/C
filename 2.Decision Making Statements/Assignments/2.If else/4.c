//WAP to check whether the number entered is positive or negative: if else
#include<conio.h>
#include<stdio.h>
int main()
{
int no;
printf("Enter the number");
scanf("%d",&no);	
if(no>0)
{
	printf("Number is Positive ");
}
else
{
	printf("Number is Negative ");
}
	getch();
	return 0;
}
