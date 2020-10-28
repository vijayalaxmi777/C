//pointers and structure
#include<conio.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float percent;
}s1,*p;
int main()
{
	p=&s1;	
	printf("Enter the roll no\n");
	scanf("%d",&p->rno);
	printf("Enter name\n");
	scanf("%s",&p->name);
	printf("Enter percentage\n");
	scanf("%f",&p->percent);
	printf("-----------------------------------------\n");
	printf("Roll no = %d\n",p->rno);
	printf("Name = %s\n",p->name);
	printf("Percentage = %f\n",p->percent);		
	getch();
	return 0;
}
