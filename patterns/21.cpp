#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the number to display the pattern\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",j+1);
			
		}
		printf("\n");
	}
	
	return(0);
	getch();
}
