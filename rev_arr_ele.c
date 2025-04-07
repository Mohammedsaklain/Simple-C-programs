/*Program to Reverse an array elements*/

#include<stdio.h>
int main()
{
  int a,i,k=0;
  printf("Enter the size of array ");
  scanf("%d",&a);
  int b[a],c[a];
  for(i=0;i<a;i++)
    {
      scanf("%d",&b[i]);
    }
  for(i=(a-1);i>=0;i--)
    {
      c[k]=b[i];
      k++;
    }
  for(int m=0;m<a;m++)
    {
      b[m]=c[m];
    }
  printf("Reversed array\n");
  for(int n=0;n<a;n++)
    {
      printf("%d ",b[n]);
    }
}
