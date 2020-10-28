//wap to find area of triangle : area 0.5 * b* h
#include<conio.h>
#include<stdio.h>
int main()
{
int b,h;
float area;
printf("Enter the base and height of triangle");
scanf("%d%d",&b,&h);
//calculation part
	area=0.5*b*h;
printf("Area of triangle is %2.1f",area);	
	getch();
	return 0;
}
