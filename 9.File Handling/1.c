/*
In C, you can perform four major operations on files, either text or binary:

Creating a new file
Opening an existing file
Closing a file
Reading from and writing information to a file
*/
//1. Write to a text file
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	int num;
   FILE *fptr;

   fptr = fopen("C:\\Users\\syntel\\Documents\\VJ\\PL\\C\\9.File Handling\\writeOperation.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      //exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);	
		
	getch();
	return 0;
}

