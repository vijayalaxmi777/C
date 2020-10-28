// 3. function with argument and without return type
	#include<conio.h>
	#include<stdio.h>
	void add(int a,int b);
	void display(int );
	int main()
	{	
		int x,y;
		printf("Enter 2 numbers for addition\n");
		scanf("%d%d",&x,&y);
		add(x,y);
		getch();
		return 0;
	}
	void add(int a,int b)
	{
		int c;
		c=a+b;
		display(c);
		
	}
	void display(int sum)
	{
		printf("Sum is = %d",sum);
	}
