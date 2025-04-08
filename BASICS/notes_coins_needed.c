/* program to find the number of notes/coins needed for given amnt */

#include<stdio.h>
int main()
{
  int a;
  printf("enter a no ");
  scanf("%d",&a);
  printf(" 100Rs = %d\n",a/100);
  printf("50Rs =%d\n",(a/100)*2);
  printf("10Rs =%d\n",(a/100)*10);
  printf("coins =%d",(a%10));
}