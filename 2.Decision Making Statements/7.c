//WAP to check whether the number entered is +ve or -ve: conditional operator
#include<conio.h>
#include<stdio.h>
int main()
{
	int no;
	printf("Enter the number");
    scanf("%d",&no);
    (no>0)?printf("Positive"):printf("Negative");
	
	getch();
	return 0;
}
