//recursion
	#include<conio.h>
	#include<stdio.h>
	int fact(int no);	
	int main()
	{
		int n,factorial;
		printf("Enter the number to find out the factorial\n");
		scanf("%d",&n);
		factorial=fact(n);
		printf("Factorial = %d\n",factorial);
		getch();
		return 0;
	}
	int fact(int no)
	{
		int f;
		if(no==1)
		{
			return 1;
		}
		else
		{
			
			f=no*fact(no-1);
			
		}
	}
