//WAP to find GCD of 2 numbers
#include<conio.h>
#include<stdio.h>
int main()
{
	int m,n,r,x,y;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&m,&n);
	x=m;
	y=n;
	//logic for gcd
	do{
		r=m%n;
		if(r==0)
			break;
		else{
				m=n;
				n=r;
			}		
	  }while(r);
	printf("Greatest common divisor of numbers %d and %d is %d",x,y,n);
	getch();
	return 0;
}
