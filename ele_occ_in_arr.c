/* Program to find an element position in an array */

#include<stdio.h>
int main()
{
  int a,c,l,found=0, Cnt=0,m=0;
  printf("Enter the size of array ");
  scanf("%d",&a);
  int b[a], store[a];
  printf("Enter the array ");
  for(int i=0;i<a;i++)
    {
      scanf("%d",&b[i]);
    }
  printf("Enter no. to find ");
  scanf("%d",&c);
  for(int j=0;j<a;j++)
    {
      if(c==b[j])
      {
        store[m]=j;
        Cnt+=1;
        m+=1;
        found =1;
      }
    }
    if(!found)
    {
        printf("Element %d NOT FOUND or Doesn't Exist",c);
    }
    else
    {
        printf("Element %d found in poistion ",c);
        for(int i=0;i<Cnt;i++)
        {
            printf("%d, ",store[i]);
        }
    }
}
