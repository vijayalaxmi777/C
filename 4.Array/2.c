//2.WAP to perform matrix addition
#include<conio.h>
#include<stdio.h>
int main()
{
	int matrix1[2][2],matrix2[2][2], sum[2][2],i,j;
	printf("Enter the element for matrix1\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
		printf("Enter the element for matrix2\n");
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	// logic : addition of 2 matrices
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			sum[i][j]=matrix1[i][j]+ matrix2[i][j];
		}
	}
	//displaying matrix1
	printf("======= matrix 1 ===========\n");
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\t%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
		//displaying matrix2
	printf("======= matrix 2 ===========\n");
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\t%d\t",matrix2[i][j]);
		}
		printf("\n");
		

	}
	
	//displaying addition of matrices
	printf("=======Addition of matrices ===========\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\t%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
	getch();
}
