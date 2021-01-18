//4.accessing variables: pointer to char
#include<conio.h>
#include<stdio.h>
int main()
{
	char A='1', *p;
	p=&A; 			//initialization of pointer
	printf("Value of 'A' using variable = %c\n",A);
	printf("Value of 'A' using pointer variable = %c\n",*p);
	printf("Address of 'A' = %u\n",&A);
	printf("Address of 'A' using pointer variable = %u\n",p);
	printf("Address of pointer variable 'p' = %u\n",&p);
	printf("%d",sizeof(A));
	printf("%d",sizeof(p));
	getch();
	return 0;
}
