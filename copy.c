#include<stdio.h>
int main()
{
int a[3],b[3],i;
  printf("enter the first array");
  {
       for(i=0;i<3;i++)
       {
        scanf("%d",&a[i]);
       }
       for(i=0;i<3;i++)
       {
        printf("%d\t",a[i]);
       }
  }
   {
        for(i=0;i<3;i++)
        {
          b[i]=a[i];
        }
        for(i=0;i<3;i++)
        {
         printf("%d\t",b[i]);
        }
    }
        
}