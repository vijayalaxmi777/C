// 4. function with argument and with return type
	#include<conio.h>
	#include<stdio.h>
	int add(int a,int b);
	int main()
	{	
		int x,y,sum;
		printf("Enter 2 numbers for addition\n");
		scanf("%d%d",&x,&y);
		sum=add(x,y);
		printf("Addition is %d",sum);
		getch();
		return 0;
	}
	int add(int a,int b)
	{
		int c;
		c=a+b;
		return c;	
	}
