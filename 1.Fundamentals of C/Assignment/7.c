//7.WAP to convert temperature from Fahrenheit to Celsius (C=5.0/9.0*F-32)
#include<conio.h>
#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter temperature in Fahrenheit");
	scanf("%f",&F);
	//logic
	C=(5.0/9.0)*(F-32);
	printf("===================================\n");
	printf("In Fahrenheit= %5.2f\nIn Celsius=%5.2f",F,C);
	getch();
	return 0;
}
