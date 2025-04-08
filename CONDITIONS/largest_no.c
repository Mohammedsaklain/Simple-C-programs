/* program to find largest number among 3 */

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter 3 no's ");
  scanf("%d",&a);
    scanf("%d",&b);
     scanf("%d",&c);
  if(a>b && a>c)
    printf("%d is largest",a);
  else if (b>a && b>c)
    printf(" %d is largest",b);
  else
    printf("%d is largest",c);
}