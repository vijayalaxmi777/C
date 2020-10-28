//Bubble sort
#include<conio.h>
#include<stdio.h>

int main()
{
	int a[5]={9,8,7,6,5},i,j,temp;
	//sorting	
		for(i=0;i<5-1;i++)
		{
			for(j=0;j<5-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("Sorted array\n");
		for(i=0;i<5;i++)
		{
			printf("%d\t",a[i]);
		}
	getch();
	return 0;
}
