//3. using pointer to pass structure to a function
#include<conio.h>
#include<stdio.h>
#include<String.h>
struct student
{
	int rno;
	char name[30];
	float percent;
}s1;
void display(struct student *p);
int main()
{
	printf("Enter the roll no\n");
	scanf("%d",&s1.rno);
	printf("Enter name\n");
	scanf("%s",&s1.name);
	printf("Enter percentage\n");
	scanf("%f",&s1.percent);	
	display(&s1);	
	getch();
	return 0;
}
void display(struct student *p)
{
	printf("Roll no = %d\n",p->rno);
	printf("Name = %s\n",p->name);
	printf("Percentage = %f\n",p->percent);
}
