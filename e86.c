#include <stdio.h>
#include<string.h>

int main() 
{

   FILE *fp;
   char * string = "C Programming tutorial from TutorialsPoint";
   int i;
   char ch;

   fp = fopen("file1.txt", "w");

   for (i = 0; i < strlen(string); i++) 
   {
      ch = string[i];
      if (ch == EOF)
         break;
      fputc(ch, fp);
   }
   printf ("\n");
   fclose(fp);
   
   return 0;
}