/*1. Nesting of Structure:
It can be done  a) by creating 1 structure inside another
				b) by defining 2 structures and 
				  using only tag name to define inner structure
*/
#include<conio.h>
#include<stdio.h>
#include<String.h>
/*
struct student
{
	int rno;
	char name[30];
	struct info
	{
		int marks;
		char dept[30];		//creating 1 structure inside another
	}i;
}s;
*/
struct info
	{
		int marks;
		char dept[30];		//creating 1 structure inside another
	}i;
struct student
{
	int rno;
	char name[30];
	struct info i;
}s;

int main()
{
	printf("Enter the roll no\n");
	scanf("%d",&s.rno);
	printf("Enter name\n");
	scanf("%s",&s.name);
	printf("Enter the department\n");
	scanf("%s",&s.i.dept);
	printf("Enter the marks\n");
	scanf("%d",&s.i.marks);
	printf("---------------------------------------\n");
	printf("Roll no= %d\n",s.rno);	
	printf("Name = %s\n",s.name);
	printf("dept = %s\n",s.i.dept);
	printf("Marks = %d\n",s.i.marks);	
	getch();
	return 0;
}
