// Program to reverse a given integer
#include<stdio.h>
int main()
{
    int n,rn=0,r;
    printf("Enter\n");
    scanf("%d",&n);
    
    while(n!=0)
    {
        r  = n%10;
        rn = rn * 10 + r;
        n/= 10;
    }
    printf("reversed no is %d", rn);
}
