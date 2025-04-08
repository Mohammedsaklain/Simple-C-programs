//To find the largest and smallest element in an array

#include<stdio.h>
int main()
{
    int n,largest,smallest;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    
    int ar[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    largest = ar[0];
    smallest = ar[0];
    
    for(int i =0;i<n;i++)
    {
        if(ar[i]>largest)
        {
            largest = ar[i];
        }
        if(ar[i]<smallest)
        {
            smallest = ar[i];
        }
    }
    printf("%d is smallest\n",smallest);
    printf("%d is largest\n",largest);
}
