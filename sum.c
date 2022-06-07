//to find the sum of the array elements 
#include<stdio.h>
int main()
{
int a[10],i,sum;
  printf("enter array elements");
  for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }
  sum=0;
  for(i=0;i<10;i++)
    {
      sum=sum+a[i];
    }
    printf("the sum is %d",sum);
  
}
