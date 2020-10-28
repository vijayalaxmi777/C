#include<conio.h>
#include<stdio.h>
int main()
{
	int ar[5]={1,2,3,4,5},i;   //compile time	
		for(i=0;i<5;i++)
		{
			printf("arr[%d]-->%d\n",i,ar[i]);
		}
printf("===========================================\n");	
	ar[3]=5;
		for(i=0;i<5;i++)
		{
			printf("arr[%d]-->%d\n",i,ar[i]);
		}
		
	
	printf("Enter no for place 1st");			//runtime initialization
	scanf("%d",&ar[0]);
	
		for(i=0;i<5;i++)
		{
			printf("arr[%d]-->%d\n",i,ar[i]);
		}
	
	getch();
	return 0;
}
