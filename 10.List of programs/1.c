#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",count++);
		}
		printf("\n");
	}
	getch();
	return 0;
}
