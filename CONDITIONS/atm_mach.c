/* ATM machine*/
#include <stdio.h>

int main() {
    int a,b,c=10000,d,e=0000,f,i,j;
    while (1)
    {
    printf("\nWelcome\n");
    printf("Enter password\n");
    scanf("%d",&a);
    if (a==e)
    {
        printf("Enter option\n1-Change pin\n2-Balance enquiry\n3-Withdraw\n4-Cash deposit\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1: 
            printf("Enter old pin\n");
            scanf("%d",&d);
            if(d==e)
            {
            printf("Enter new pin\n");
            scanf("%d",&d);
            printf("Confirm new pin\n");
            scanf("%d",&f);
            if(f==d)
            {
            e=f;
            printf("New password set\n");
            }
            else
            printf("Passwords don't match\n");
            }
            else
            printf("Wrong Pin\n");
            break;
            case 2:
            printf("Balace is Rs.%d",c);
            break;
            case 3:
            printf("Enter amount\n");
            scanf("%d",&i);
            if (i>(c-1000))
            printf("Insufficient balance\n");
            else
            {
                c=c-i;
                printf("The remaining balance is Rs.%d\n",c);
            }
            break;
            case 4:
            printf("Enter amount\n");
            scanf("%d",&j);
            c=c+j;
            printf("The new balance is Rs.%d",c);
            break;
            default:
            printf("Invalid entry\n");
            break;
        }
    }
    else
    printf("Thief\n");
    }
}