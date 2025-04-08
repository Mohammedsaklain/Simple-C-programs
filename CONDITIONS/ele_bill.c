/* Program to find the electricity bill with respect to units consumed*/

#include<stdio.h>
int main()
{
  int unit,bill;
  printf("no's of unit ");
  scanf("%d",&unit);
  if(unit<=500)
  {
    bill=unit*1;
    printf("Amount is %d",bill);
  }
  else if((unit>=501) && (unit<=700))
  {
    bill=(500)+((((unit/100) - 5)*100)*5);
    printf("Amount is %d",bill);
  }
  else 
  {
    bill = (500)+(200*5) +((((unit/100) - 7)*100)*10);
    printf("Amount is %d",bill);
  }
}