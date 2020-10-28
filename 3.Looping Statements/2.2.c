//2.2. Nested for loop : 2D matrix
#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j;
	printf("--Nested for loop example--\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
