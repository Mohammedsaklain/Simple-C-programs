/* Star pattern*/
#include <stdio.h>

int main() {
   int rows, i, j;

   printf("Enter number of rows: ");
   scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
      {
      for(j = 1; j <=i; j++)
        {
         printf("* ");
        }
      printf("\n");
   }
  
   for(i = 1; i <= rows; i++) {
      for(j = 1; j <=5; j++) {
         printf("* ");
      }
      printf("\n");
   }


    for(i = rows; i >= 0; i--) 
{
      for(j = 1; j <=i; j++) {
         printf("* ");
      }
      printf("\n");
   }

  
   return 0;
}