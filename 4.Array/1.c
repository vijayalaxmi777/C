//WAP to add elements in the array
#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[5],i,sum=0;
	printf("Enter the elements of an array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("----------------------------------\n");
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];  //logic	
	}		
	printf("The addition of 5 elements in an array is %d",sum);
	getch();
	return 0;
}
