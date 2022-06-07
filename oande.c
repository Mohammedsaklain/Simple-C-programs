//find the odd and even numbers repeated 
#include<stdio.h>
int main()
{
 int a[10],i,even,odd;
  printf("enter the elements");
  for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }
  even=0;
  odd=0;
  for(i=0;i<10;i++)
    {
      if(a[i]%2==0)
      {
        even=even+1;
      }
      else
      {
       odd=odd+1;
      }
    }
  printf("there are %d even and %d odd numbers\n",even,odd);
}
