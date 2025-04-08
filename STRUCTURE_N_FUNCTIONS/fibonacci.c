// Recursive function to find the Nth fibonacci number

#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter\n");
    scanf("%d",&n);
    printf("%dth fibonacci is %d", n,fibonacci(n));
}
