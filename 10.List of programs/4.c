#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int s=0,i,x[10];
	printf("Enter Elements of x1 to x10\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		s=s+pow(x[i],2);
		printf("%d\n",s);
	}
	printf("result=%d",s);
	getch();
	return 0;
}
