#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char n;
	printf("Enter the no of stars to be displayed in pattern\n");
	scanf("%c",&n);
	for(i=n;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c\t",j);
			
		}
		printf("\n");
	}
	
	return(0);
	getch();
}
