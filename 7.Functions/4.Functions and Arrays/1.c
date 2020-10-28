//1. functions and arrays
	#include<conio.h>
	#include<stdio.h>
	void sum(int a[],int size);
	int main()
	{
		int i,a[5];
		printf("Enter the elements of an array");
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		sum(a,5);
	
		getch();
		return 0;
	}
	void sum(int a[],int size)
	{
		int s=0,i;
		for(i=0;i<size;i++)
		{
			s=s+a[i];
		}
		printf("Addition of elements is = %d",s);
	}
	
