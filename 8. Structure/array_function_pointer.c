//pointer array function
#include<stdio.h>
#include<conio.h>
void add(int[],int);
int main()
{
	int a[5]={1,2,3,4,5};
	add(a,5);
	getch();
	return 0;
}
void add(int arr[],int s)
{
	int *p,sum=0,i;
	p=arr;
	for(i=0;i<s;i++)
	{
		sum=sum+*p;
		p++;
		
	}
	printf("Sum=%d",sum);
}
