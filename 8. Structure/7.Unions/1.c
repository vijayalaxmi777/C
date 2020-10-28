//1. union
#include<conio.h>
#include<stdio.h>
#include<String.h>
union student
{
	int rno;
	char name[30];
}s1;
int main()
{
	printf("%d",sizeof(s1));
	printf("Enter the roll no\n");
	scanf("%d",&s1.rno);
	printf("Roll no = %d\n",s1.rno);
	printf("Enter name\n");
	scanf("%s",&s1.name);
	printf("Name = %s\n",s1.name);	
	printf("Roll no = %d\n",s1.rno);
	getch();
	return 0;
}
