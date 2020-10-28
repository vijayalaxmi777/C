//3. To find simple interest : I = PNR/100
#include<conio.h>
#include<stdio.h>
int main()
{
int P,N,R;
float I;
printf("Enter Principal amount");
scanf("%d",&P);	
printf("Enter Number of months");
scanf("%d",&N);
printf("Enter rate");
scanf("%d",&R);	
// calculations
I = (P*N*R)/100;
printf("Simple Interest I = %f", I);
	getch();
	return 0;
}
