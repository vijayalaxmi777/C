#include<stdio.h>
#include<conio.h>
int main()
{
	int noOfRow,noOfCol,row,col1,col2;
	noOfCol=noOfRow=5;

	for(row=1;row<=noOfRow;row++)
	{
		for(col1=1;col1<row;col1++)
		{
			printf("\t");
		}
		
	for(col2=noOfCol;col2>=1;col2--)
		{
			printf("\t%d",noOfCol);
		}
		noOfCol--;
			
			printf("\n");
	}
	return(0);
	getch();
}
