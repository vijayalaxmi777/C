//WAP to convert decimal number to binary number
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,rem,no=0,a=1,x;
	printf("Enter the decimal number\n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%2;
		no=no+rem*a;
		n=n/2;
		a=a*10;
	}
	printf(" Decimal value :%d\n Binary value :%d\n",x,no);
	getch();
	return 0;
}
