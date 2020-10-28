#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the no of stars to be displayed in pattern\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",i);
			
		}
		printf("\n");
	}
	
	return(0);
	getch();
}
