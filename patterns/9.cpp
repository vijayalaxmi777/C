#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char n;
	//char ch;
	printf("Enter the alphabet upto which you want pattern \n");
	scanf("%c",&n);
//	printf("%d",n);
	for(i=n;i>=65;i--)
	{
		for(j=n;j>=65;j--)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}

	return(0);
	getch();
}
