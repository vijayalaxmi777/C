// 1. function without argument and without return type
	#include<conio.h>
	#include<stdio.h>
	void add();  //function declaration
	int main()
	{
		add();  //fun calling
		getch();
		return 0;
	}
	void add()   //function definition
	{
		int a,b,sum;
		printf("Enter values for num1 and num2\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("Addition is = %d\n",sum);
	}
