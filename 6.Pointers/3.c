//pointers and array
#include<conio.h>
#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int *p,i;
p=a;
printf("----numbers----\n");
for(i=0;i<5;i++)
{
	printf("\t%d\n",*p);
	p++;		
}	
	
	getch();
	return 0;
}


