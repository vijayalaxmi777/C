#include<conio.h>
#include<stdio.h>
int main()
{
	int choice,amt;
	char ch;
	do{
		printf("Enter the operation you want to perform\n");
		printf("1.Deposit\t2.Withdraw\t3.Display");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter amount");
					scanf("%d",&amt);
					break;
			case 2:
					break;
			case 3:
					break;
			default: printf("Please enter the correct choice\n");				
		}
		printf("Do you want to continue?{y/Y}");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	
	getch();
	return 0;
}
