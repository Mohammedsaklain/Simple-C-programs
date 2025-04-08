/* To print the wave pattern*/

#include<stdio.h>
int main()
{
    int a ,b;
    printf("--E--\n");
    
    while(1)
    {
        scanf("%d",&a);
        for(int i=a;i>0;)
        {
            printf("_|");
            b = i;
            while(b)
            {
                printf(" ");
                b = b-1;
            }
            printf("|_");
            i = i-1;
        }
        printf("\n");
    }
    return 0;
}
