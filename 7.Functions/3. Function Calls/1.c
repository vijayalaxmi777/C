//1. call by value
	#include<conio.h>
	#include<stdio.h>
	void swap(int a,int b);
	int main()
	{
		int x,y;
		printf("Enter values for X and Y \n");
		scanf("%d%d",&x,&y);
		printf("------------Before swapping ----------------\n");
		printf("X = %d\n",x);
		printf("Y = %d\n",y);
		swap(x,y);			// function calling
		printf("----------- After swapping -----------------\n");
		printf("X = %d\n",x);
		printf("Y = %d\n",y);

		getch();
		return 0;
	}
	void swap(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
		printf("----------- After swapping -----------------\n");
		printf("X = %d\n",a);
		printf("Y = %d\n",b);
	}
