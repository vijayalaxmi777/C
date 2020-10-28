//WAP to swap 2 numbers without using 3rd variable
#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
printf("-------------- Before swapping -----------------\n");
printf("num1 = %d\n",a);
printf("num2 = %d\n",b);
	// logic
	a=a+b;
	b=a-b;
	a=a-b;
printf("-------------- After swapping -----------------\n");
printf("num1 = %d\n",a);
printf("num2 = %d\n",b);	
	getch();
	return 0;
}
