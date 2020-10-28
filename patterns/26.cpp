#include<stdio.h>
#include<conio.h>
int main()
{
	int noOfRow,noOfCol,row,col1,col2;
	noOfRow=5;
	noOfCol=noOfRow-1;
	for(row=1;row<=noOfRow;row++)
	{
		for(col1=1;col1<=noOfCol;col1++)
		{
			printf("\t");
		}
		noOfCol--;
		for(col2=1;col2<=row;col2++)
		{
			printf("\t%d",col2);
		}
			
			printf("\n");
	}
	return(0);
	getch();
}
