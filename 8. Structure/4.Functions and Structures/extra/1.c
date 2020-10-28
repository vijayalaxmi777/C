//1. passing individual elements
#include<conio.h>
#include<stdio.h>
#include<String.h>
struct student
{
	int rno;
	char name[30];
	float percent;
}s1;
void display(int r, char *n,float p);
int main()
{
	printf("Enter the roll no\n");
	scanf("%d",&s1.rno);
	printf("Enter name\n");
	scanf("%s",&s1.name);
	printf("Enter percentage\n");
	scanf("%f",&s1.percent);	
	display(s1.rno,s1.name,s1.percent);	
	getch();
	return 0;
}
void display(int r, char *n,float p)
{
	printf("Roll no = %d\n",r);
	printf("Name = %s\n",n);
	printf("Percentage = %f\n",p);
}
