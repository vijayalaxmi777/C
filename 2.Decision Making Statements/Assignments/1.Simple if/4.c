//WAP to accept character from user and check if its vowel 
#include<conio.h>
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if((ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u'||ch=='U'))
	{
		printf("Its vowel");
	}
	getch();
	return 0;
}
