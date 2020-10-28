//WAP to compare 2 no's & display the appropriate message
#include<conio.h>
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter 2 numbers");
	scanf("%d%d",&x,&y);
	printf("-----------------Output-------------------\n");
	if(x>y)
	{
		printf("%d is greater",x);
	}
	if(x<y)
	{
		printf("%d is greater",y);
	}
	getch();
	return 0;
}
