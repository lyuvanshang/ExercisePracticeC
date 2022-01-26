
#include <stdio.h>
#include <stdlib.h>
int main()
{
   char c[1000];
   FILE *fptr;

   fptr = fopen("program.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Nhap thong tin:\n");
   gets(c);

   fprintf(fptr,"%s", c);
   fclose(fptr);

   return 0;
}
