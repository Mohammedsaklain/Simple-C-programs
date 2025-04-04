#include<stdio.h>
void pallindrome(char a[4])
{
    if((a[0]==a[3])&&(a[1]==a[2]))
    {
        printf("%s is pallindrome",a);
    }
    else
    {
        printf("%s is not a pallindrome",a);
    }
}
int main()
{
    char a[5];
    printf("Enter\n");
    scanf("%s",&a);
    pallindrome(a);
}
