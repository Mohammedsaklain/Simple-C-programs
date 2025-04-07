/* Program to add the number with all elements of an array */

#include<stdio.h>
int main()
{
  int a[5];
  printf("Enter the array");
  for(int i=0;i<=4;i++)
    {
      scanf("%d",&a[i]);
    }
  for(int j=0;j<=4;j++)
    {
      a[j] = 15 + a[j];
    }
   printf("Resultant array");
  for(int k=0;k<=4;k++)
    {
      printf("%d ",a[k]);
    }
}
