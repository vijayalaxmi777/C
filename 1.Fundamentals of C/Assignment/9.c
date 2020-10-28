//9.WAP to calculate area of circle using symbolic constant
#include<conio.h>
#include<stdio.h>
#define PI 3.14
int main()
{
	float r,a;
	printf("Enter the radius of circle");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Area of circle is %3.2f",a);
	getch();
	return 0;
}
