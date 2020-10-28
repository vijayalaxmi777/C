#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char n;
	printf("Enter the no of stars to be displayed in pattern\n");
	scanf("%c",&n);
	for(i=65;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)             //bubble sort
		{
			printf("%c\t",j);
			
		}
		printf("\n");
	}
	
	return(0);
	getch();
}
