/* program to find the sum of middle no's in a 4 digit no */
#include<stdio.h>
int main()
{
  int a,sum;
  printf("4dig no ");
  scanf("%d",&a);
  printf("sum is %d",(a/10)%10+(a/100)%10);
}
/*
#include<stdio.h>
int main()
{
  int a;
  printf("5dig no");
  scanf("%d",&a);
  printf("sum is =%d",(a/10000)+((a/1000)%10)+((a/100)%10)+((a/10)%10)+(a%10));
}
*/