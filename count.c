#include<stdio.h>
int main()
{
int a[4],i,j,duplicate;
  printf("enter the elements ");
  
    for(i=0;i<4;i++)
     {
      scanf("%d",&a[i]);
       }
  duplicate=0;
    
      for(i=0;i<3;i++)
        {
          for(j=0;j<3-i;j++)
          if(a[i]==a[j])
          duplicate=duplicate+1;
          else
            continue;
        } 
      printf("repeated %d",duplicate);
  
}