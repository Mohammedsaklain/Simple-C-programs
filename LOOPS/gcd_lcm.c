/* To find GCD & LCM*/
#include<stdio.h>
void main()
{
  int a,b,m,n,r,gcd,lcm;
  printf("enter two non zero positive no\n");
  scanf("%d%d",&a,&b);
  m=a;
  n=b;
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  gcd=a;
  lcm=(m*n)/gcd;
  printf("GCD (%d,%d)=%d\t",m,n,gcd);
  printf("LCM (%d,%d)=%d\n",m,n,lcm);    
}