//1. accessing members and initialization of members	
/*
variable declaration of structure : 1. inside the main
									  2. outside the main
initialization of variable : 1. compile time
							 2. run time									  
*/
	#include<conio.h>
	#include<stdio.h>
	struct student
	{
		int rno;
		char name[30];
		float percent;
	}s1;			//a)outside the main variable declaration
	int main()
	{
		struct student s2 = {1,"vijaya",80.7};		//b) inside the main
												   //a) compile time initialization
		//b) run time initialization
		printf("Enter the roll no");
		scanf("%d",&s1.rno);
		printf("Enter name");
		scanf("%s",&s1.name);
		printf("Enter percentage");
		scanf("%f",&s1.percent);
		printf("------------------ first student ---------------------\n");
		printf("roll no = %d\n",s2.rno);	
		printf("name = %s\n",s2.name);
		printf("percent = %.f\n",s2.percent);
		printf("------------------ second student ---------------------\n");
		printf("roll no = %d\n",s1.rno);	
		printf("name = %s\n",s1.name);
		printf("percent = %.f\n",s1.percent);
		
		getch();
		return 0;
	}
