/* program to find a leap year*/

#include<stdio.h>
int main()
{
  int year;
  printf("enter year ");
  scanf("%d",&year);
   if ((year%100) ==0)
     {
       if ((year%400)==0)
       {
         printf("leap year");
       }
       else
       {
         printf("not a leap year");
       }
     }

   else
     {
       if((year%4)==0)
       {
         printf("leap year");
       }
       else
       {
         printf("not a leap year");
       }
     }
}

/*
#include<stdio.h>
int main()
{
  int year;
  printf("enter year");
  scanf("%d",&year);
   if (((year%100) ==0) && ((year%400)==0))
     printf("leap");
   else if(((year%100)!=0) && ((year%4)==0))
     printf("leap");
   else
     printf("not a leap year");
}*/