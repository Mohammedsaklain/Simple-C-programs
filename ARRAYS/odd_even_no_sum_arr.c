/* To find the Odd and Even no sum in an array */

#include<stdio.h>
int main()
{
  int evnsum=0,oddsum=0,a[10];
  printf("Enter arr ");
  for(int i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
    }
  for(int j=0;j<=9;j++)
    {
      if((a[j]%2)==0)
      {
        evnsum=evnsum+a[j];
      }
      else
      {
         oddsum= oddsum+a[j];
      }
    }
  printf("Even sum is %d\n",evnsum);
  printf("odd sum is %d",oddsum);
  
}
