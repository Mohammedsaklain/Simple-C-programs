/* Program to find the sum of first & last digit in a 3 digit number*/

#include<stdio.h>
int main()
{
  int a,sum,f,l;
  printf("enter 3 digit no ");
  scanf("%d",&a);
  f = a%10;
  l = a/100;
  printf("sum = %d",f+l);
}