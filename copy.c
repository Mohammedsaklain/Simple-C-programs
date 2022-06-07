// copy the one array elements into other array
#include<stdio.h>
int main()
{
int a[3],b[3],i;
  printf("enter the array");
  {
       for(i=0;i<3;i++)
       {
        scanf("%d",&a[i]);
       }
       printf("The first array is\n");
       for(i=0;i<3;i++)
       {
        printf("%d\t",a[i]);
       }
  }
  printf("\n");
   {
        for(i=0;i<3;i++)
        {
          b[i]=a[i];
        }
         printf("The copied array elements\n");
        for(i=0;i<3;i++)
        {
         printf("%d\t",b[i]);
        }
    }
        
}
