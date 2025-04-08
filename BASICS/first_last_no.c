/* program to extract first & last number in a 2 Digit No*/
#include<stdio.h>
int main()
{
  int a;
  printf("enter 2 Digit No ");
  scanf("%d",&a);
  printf("First digit %d\n",(a/10));
  printf("Last digit %d",(a%10));
}
