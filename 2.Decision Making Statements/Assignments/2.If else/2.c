//WAP to add 2 no's if 2nd no is greater than 1st otherwise perform subtraction
#include<conio.h>
#include<stdio.h>
int main()
{
	int num1,num2,result;
	printf("Enter 1st number\n");
	scanf("%d",&num1);
	printf("Enter 2nd number\n");
	scanf("%d",&num2);
	if(num1<num2)
	{
		result=num1+num2;
		printf("Addition is %d",result);
	}
	else
	{
		result=num1-num2;
		printf("Subtraction is %d",result);
	}
	
	getch();
	return 0;
}
