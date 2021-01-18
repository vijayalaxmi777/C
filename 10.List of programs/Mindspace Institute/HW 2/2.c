//WAP to reverse given number
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,rem,s=0;
	printf("Enter number\n");
	scanf("%d",&n);
	//logic to reverse number
	while(n>0)
	{
		rem=n%10;
		s=s*10 +rem;
		n=n/10;
	}	
	printf("Reverse number of given number is %d",s);
	getch();
	return 0;
}
