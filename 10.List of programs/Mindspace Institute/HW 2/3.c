//WAP to check whether the given number is palindrome or not
#include<conio.h>
#include<stdio.h>
int main()
{
	int n,rem,s=0,no;
	printf("Enter number\n");
	scanf("%d",&n);
	no=n;
	//logic to reverse number
	while(n>0)
	{
		rem=n%10;
		s=s*10 +rem;
		n=n/10;
	}
	if(no==s)	
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	getch();
	return 0;
}
