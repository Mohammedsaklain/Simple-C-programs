/* Number Pattern*/

#include<stdio.h>
int main()
{
  int a;
  printf("enter no");
  scanf("%d",&a);
   for(int i=2;i<=(a+1);i++)
    {
      for(int j=i;j<=(i-1+a);j++)
        {
         printf("%d ",j);
        }
      printf("\n");
    }
}
