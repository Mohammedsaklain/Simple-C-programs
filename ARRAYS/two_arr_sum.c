/* Program to find the 2 arrays sum in 3rd array */ 

#include<stdio.h>
int main()
{
  int a;
  printf("Enter the size of arrays ");
  scanf("%d",&a);
  int b[a],c[a],d[a];
  printf("array1 element ");
  for(int i=0;i<a;i++)
    {
      scanf("%d",&b[i]);
    }
   printf("array2 element ");
  for(int j=0;j<a;j++)
    {
      scanf("%d",&c[j]);
    }
  for(int k=0;k<a;k++)
      {
        d[k]=b[k]+c[k];
      }
  printf("Sum is ");
  for(int m=0;m<a;m++)
    {
      printf("%d ",d[m]);
    }
}
