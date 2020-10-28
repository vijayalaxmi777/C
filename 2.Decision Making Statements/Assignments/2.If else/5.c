//incomplete//WAP to accept character and convert it into opposite case 
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch>='a')
	{
		strlwr(ch);
		printf("ch= %c",ch);
	}
	getch();
	return 0;
}
