/* Simple calculator*/

#include<stdio.h>
int main()
{
  int a,b,num;
  printf("2 no's ");
  scanf("%d%d",&a,&b);
  printf("Press \n1 => ADD\n2 => SUB\n3 => DIV\n4 => MUL\n");
  scanf("%d",&num);
  switch(num)
    {
      case 1: printf("Sum = %d\t",a+b);
        break;
      case 2: printf("Sub = %d\t",a-b);
        break;
      case 3: printf("Div =%d\t",a/b);
        break;
      case 4: printf("Mul =%d\t",a*b);
        break;
    }
}