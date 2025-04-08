/* Program of a Simple ATM Machine implementation*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,code,state,password=8421,balance=5000,x;
    while(1)
    {

  printf("----------Welcome----------\n");
  printf("(----ENTER YOUR PASSWORD----)\n");
  scanf("%d",&a);
  if(a==password)
  {



          printf("==>BALANCE(1)\n==>WITHDRAWAL(2)\n==>DEPOSIT(3)\n==>PASSWORD_CHANGE(4)\n==> EXIT(0)\n");
          scanf("%d",&code);
    switch(code)
      {
        case 1: printf("YOUR_CURRENT_BALANCE_%d\n\n",balance);
        break;
        case 2: printf("ENTER_THE_AMOUNT_IN_MULTIPLE_OF_FIVE\n");
                scanf("%d",&b);
                if(balance>=b)
                {
                  if(b>=10000)
                  {
                    printf("YOU_CAN'T_WITHDRAW\n");
                  }
                  printf("COLLECT_YOUR_MONEY_%d\n",b);
                  balance = balance - b;

                }
                else
                {
                  printf("OUT_OF_BALANCE\n");
                }
        break;
        case 3: printf("CONFIRM_YOUR_PASSWORD\n");
                scanf("%d",&c);
                if(password==c)
                {
                  printf("ENTER_THE_AMOUNT_TO-BE_DEPOSITED\n");
                  scanf("%d",&d);
                  balance=balance+d;
                }
                printf("TO_KNOW_UR_BALANCE_CLICK_1_OR_ELSE_0\n");
                scanf("%d",&state);
                switch(state)
                  {
                    case 1: printf("YOUR_NEW_BALANCE_%d\n",balance);
                    break;
                    case 0: printf("THANK_YOU!!!\n");
                  }
        break;
        case 4:  printf("CONFIRM_YOUR_PASSWORD\n");
                scanf("%d",&e);
                if(password==e)
                { 
                  printf("ENTER_UR_NEW_PASSWORD\n");
                  scanf("%d",&f);
                  password=f;
                  printf("YOUR_PASSWORD_IS_CHANGED_SUCCESSFULLY\n");
                }
        break;
        case 0: printf("Thank You!\n");
               break;
        default: printf("INVALID ENTRY\n");
              }
       }

  else
  {
    printf("INCORRECT_PASSWORD\n");
  }

}}

