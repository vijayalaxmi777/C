//WAP to find whether the given number is amstrong number or not
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,no,sum=0,r;
	printf("Enter number\n");
	scanf("%d",&n);
	no=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(sum==no)
	printf("Given number %d is amstrong number",no);
	else
	printf("Given number %d is not amstrong number",no);
	getch();
	return 0;
}
