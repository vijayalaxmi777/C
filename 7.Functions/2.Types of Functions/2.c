// 2. function without argument and with return type
	#include<conio.h>
	#include<stdio.h>

	int add();
	int main()
	{	
		int sum;
		sum=add();
		printf("Addtion is =%d\n",sum);
		getch();
		return 0;
	}
	int add()
	{
		int a,b,c;
		printf("Enter values for num1 and num2\n");
		scanf("%d%d",&a,&b);
		c=a+b;
		return c;
	}
