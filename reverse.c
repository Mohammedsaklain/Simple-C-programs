#include<stdio.h>
int main()
{
int a[10],i;
  printf("enter the array element");
  for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    }
  printf("the array elements in reverse order are");
    for(i=2;i>=0;i--)
      {
        printf("%d\t",a[i]);
      }
  return 0;
}