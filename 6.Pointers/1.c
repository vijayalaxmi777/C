//1.accessing variables
#include<conio.h>
#include<stdio.h>
int main()
{
	int A=10, *p;
	p=&A; 			//initialization of pointer
	printf("Value of 'A' using variable = %d\n",A);
	printf("Value of 'A' using pointer variable = %d\n",*p);
	printf("Address of 'A' = %u\n",&A);
	printf("Address of 'A' using pointer variable = %u\n",p);
	printf("Address of pointer variable 'p' = %u\n",&p);
	printf("%d",sizeof(A));
	getch();
	return 0;
}
