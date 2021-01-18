/*WAP to read from a file*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\Users\\syntel\\Documents\\VJ\\PL\\C\\9.File Handling\\writeOperation.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       //exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}

