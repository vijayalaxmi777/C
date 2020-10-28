//pointer arithmetic
//addition of 2 no's using pointer variable
#include<conio.h>
#include<stdio.h>
int main()
{
int a,b,c;
int *p,*q;
printf("Enter the 2 no's\n");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
c=(*p)+(*q);
printf("\n Addition is = %d\n",c);	
	
	getch();
	return 0;
}
