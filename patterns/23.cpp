#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char n;
	printf("Enter the character to display the pattern\n");
	scanf("%c",&n);
	for(i=65;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("%c\t",n-j);
			
		}
		printf("\n");
	}
	
	return(0);
	getch();
}
