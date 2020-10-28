//8.WAP to convert temperature from Celsius to Fahrenheit(F=9.0*C/5.0+32)
#include<conio.h>
#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter temperature in Celsius");
	scanf("%f",&C);
	//logic
	F=9.0*C/5.0+32;
	printf("===================================\n");
	printf("In Celsius=%5.2f\nIn Fahrenheit= %5.2f",C,F);
	getch();
	return 0;
}
