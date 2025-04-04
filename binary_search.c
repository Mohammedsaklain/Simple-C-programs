// Simple Binary search for a sorted array

#include<stdio.h>
int binarysearch(int ar[],int l,int r,int ele)
{
    while(l<=r)
    {
          int mid;
          mid = l + (r - l)/2;
        if(ar[mid] == ele)
        return mid;
        
        if(ar[mid]<ele)
          l = mid +1;
          
        else
        r = mid -1;
    }
    return -1;
}
int main()
{
    int ar[] = {1,2,3,4,5};
    int n;
    int x = 4;
    n = sizeof(ar)/sizeof(ar[0]);
    int result =  binarysearch(ar,0,n-1,x);
    if(result == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("element at %d",result);
    }
}
