/* Program to find the Even number's in a given range */

#include<stdio.h>
int main()
{
  int a;
  printf("Enter a Number ");
  scanf("%d",&a);
  for(int i=1;i<=a;i++)
    {
     if((i%2)==0)
     {
       printf("%d\t",i);
     }
    }
}