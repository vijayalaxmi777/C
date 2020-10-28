//WAP to calculate the following ratio (a+b)(c-d) only if c-d is greater than 0
#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c,d,result,ratio;
	printf("Enter values for 'a','b','c','d'\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	result=c-d;
	if(result>0)
	{
		ratio=(a+b)/(c-d);
		printf("Ratio of (a+b)/(c-d) is %d",ratio);
	}
	
	getch();
	return 0;
}
