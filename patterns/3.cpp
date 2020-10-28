#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the no of stars you want in pattern \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",j+1);
		}
		printf("\n");
	}
	return(0);
	getch();
}
