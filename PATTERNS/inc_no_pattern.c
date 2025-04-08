/* Number Pattern*/
#include<stdio.h>
int main()
{
  int a;
  printf("Enter no");
  scanf("%d",&a);
  for(int l=1;l<=a;l++)
    {
      for(int m=1;m<=l;m++)
        {
         printf("%d ",m);
        }
      printf("\n");
    }
}
