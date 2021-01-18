//WAP to convert binary number to decimal number
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,j=1,rem,n1=0,x;
	printf("Enter the binary number\n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		n1=n1+rem*j;
		j=j*2;
		n=n/10;
	}
	printf(" Binary value :%d\nDecimal  value :%d\n",x,n1);
	getch();
	return 0;
}
