/* simple conditional loop to evaluate a no is div by 6 & 5*/

#include<stdio.h>
int main()
{
  int a ;
  printf("enter no ");
  scanf("%d",&a);
   if((a%6)==0 && (a%5)==0)
      {
      printf("div by both 6 & 5");
      }
   else if((a%6)==0)
     {
      printf("div by 6");
     }
   else if((a%5) ==0)
     {
      printf("div by 5");
     }
   else
     {
      printf("not div by both");
     }
}