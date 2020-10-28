//WAP to illustrate the use of goto
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	read:
		printf("Enter the number");
		scanf("%d",&x);
		if(x<0) goto read;
		y=sqrt(x);
		z=-y;
		printf("square root of %d is %d,%d",x,y,z);
	getch();
	return 0;
}

