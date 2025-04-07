/* Number Pattern*/
#include<stdio.h>
int main()
{
  int a,z=0;
  printf("Enter no");
  scanf("%d",&a);
  for(int u=1;u<=a;u++)
    {
       for(int v=a;v>=u;v--)
        {
         printf("%d ",u);
        } 
        printf("\n");
        z=z+2;
        for(int w=1;w<=z;w++)
        {
           printf(" "); 
        }
      
    }
}
