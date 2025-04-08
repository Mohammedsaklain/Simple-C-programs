/*Number pattern of Natural numbers*/
#include<stdio.h>
int main()
{
  int a;
  printf("Enter no");
  scanf("%d",&a);
  for(int l=a;l>=1;l--)
    {
      for(int m=1;m<=l;m++)
        {
         printf("%d ",m);
        }
      printf("\n");
    }
}