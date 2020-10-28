//2. passing entire structure
#include<conio.h>
#include<stdio.h>
#include<String.h>
struct student
{
	int rno;
	char name[30];
	float percent;
}s1;
void display(struct student s1);
int main()
{
	printf("Enter the roll no\n");
	scanf("%d",&s1.rno);
	printf("Enter name\n");
	scanf("%s",&s1.name);
	printf("Enter percentage\n");
	scanf("%f",&s1.percent);	
	display(s1);	
	getch();
	return 0;
}
void display(struct student ss)
{
	printf("Roll no = %d\n",ss.rno);
	printf("Name = %s\n",ss.name);
	printf("Percentage = %f\n",ss.percent);
}
