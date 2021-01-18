//1. Append to a text file
#include<conio.h>
#include<stdio.h>
#include<String.h>
int main()
{
	int num;
   FILE *fptr;

   fptr = fopen("C:\\Users\\syntel\\Documents\\VJ\\PL\\C\\9.File Handling\\writeOperation.txt","a");

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

