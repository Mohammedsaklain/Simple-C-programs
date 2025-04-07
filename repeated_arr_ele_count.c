// Program to find the repeated elements & Count in an array

#include<stdio.h>

void repeated(int a[], int size);

int main()
{
  int a[] = {1,1,0,2,3,1,4,4}, size;
  size = sizeof(a)/sizeof(a[0]);
  repeated(a, size);
  return 0;
}

void repeated(int a[], int size)
{
  int Rep_Ele[size], Rep_Cnt=0, found; //To store the Repeated Element & it's count
  for(int i=0;i<size-1;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(a[i]==a[j])    // If repeated Element is present
      {
        found = 0;
        for(int k=0;k<size;k++)
        {
            if(Rep_Ele[k]==a[i])    // make sure Previously Stored an element
            {
                found = 1;
                break;
            }
        }
        if(!found)              // If no Repeated element was stored earlier
        {
            printf("Repeated Element = %d\n",a[i]);
            Rep_Ele[Rep_Cnt++]=a[i];
            break;
        }
      }
    }
  }
  printf("%d Elements Repeated ",Rep_Cnt);
}