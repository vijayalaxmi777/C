#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the no of stars you want in pattern \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return(0);
	getch();
}
