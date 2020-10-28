//1. arrays and structures
#include<conio.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float percent;
};

int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the roll no\n");
		scanf("%d",&s[i].rno);
		printf("Enter name\n");
		scanf("%s",&s[i].name);						// input block
		printf("Enter percentage\n");
		scanf("%f",&s[i].percent);
	}
	printf("============ Student Details ================\n");
	for(i=0;i<3;i++)
	{
		printf("rno = %d\n",s[i].rno);	
		printf("name = %s\n",s[i].name);			//output block
		printf("percent = %.f\n",s[i].percent);
		printf("-----------------------------------------\n");
	}
		
		
	getch();
	return 0;	
}
