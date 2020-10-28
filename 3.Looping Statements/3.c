//3.WAP to print the numbers from 1 to 10 using do while loop
#include<conio.h>
#include<stdio.h>
int main()
{
	int i=1;
	printf("------Numbers------\n");
	do{
		printf("\t%d\n",i);
		i++	;
      }	while(i<=10);
	
	getch();
	return 0;
}
