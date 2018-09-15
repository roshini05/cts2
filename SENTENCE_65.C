	#include <stdio.h>
#include <stdlib.h>  /* For exit() function */
#include<conio.h>
int main()
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen("c:\\program.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter a sentence:\n");
   gets(sentence);

   fprintf(fptr,"%s", sentence);
   fclose(fptr);
   getch();
   return 0;
}