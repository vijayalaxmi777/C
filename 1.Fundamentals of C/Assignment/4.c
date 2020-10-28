//WAP to find total and percentage of marks of 5 subjects of given student
#include<conio.h>
#include<stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,sub5,total;
float percentage;
printf("Enter the marks of subject 1");
scanf("%d",&sub1);
printf("Enter the marks of subject 2");
scanf("%d",&sub2);
printf("Enter the marks of subject 3");
scanf("%d",&sub3);
printf("Enter the marks of subject 4");
scanf("%d",&sub4);
printf("Enter the marks of subject 5");
scanf("%d",&sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5 ; 
	
	getch();
	return 0;
}
