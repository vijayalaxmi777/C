//WAP to print the day according to the number entered using switch case
#include<conio.h>
#include<stdio.h>
int main()
{
	int day;
	printf("Enter the day in number");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("sunday");
			   break;
		case 2:printf("monday");
			   break;
		case 3:printf("tuesday");
			   break;
		case 4:printf("wednesday");
			   break;
		case 5:printf("thursday");
			   break;	   			   			   
		case 6:printf("friday");
			   break;
		case 7:printf("saturday");
			   break;	   
		default:printf("Enter the number between 1 to 7");
	}
	getch();
	return 0;
}
