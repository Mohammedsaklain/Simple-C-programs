/* Program to print 1's in Rows & Columns with given No */ 
#include<stdio.h>
int main()
{
  int a;
  printf("enter no ");
  scanf("%d",&a);
  for(int j=1;j<=a;j++)
    {
      for(int k=1;k<=a;k++)
        {
          printf("1");
        }
      printf("\n");
    }
}