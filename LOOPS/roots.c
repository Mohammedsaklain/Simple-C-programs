/* Finding roots */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
float a,b,c,d,root1,root2,realp,imagp;
printf("Enter the value of coefficient a,b and c ");
scanf("%f%f%f",&a,&b,&c);
if (a==0)
{
printf("Invalid");
exit(0);
}
else 
{
d=b*b-4*a*c;
if(d==0)
{
printf("Roots are real and equal\n");
root1=root2=-b/(2*a);
printf("Root1=%f\t",root1);
printf("Root2=%f\n",root2);
}
else if(d>0)
{
printf("Roots are real and distinct\n");
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("Root1=%f\t",root1);
printf("Root2=%f\n",root2);
}
else
{
printf("Roots are imaginary\n");
realp=-b/(2*a);
imagp=sqrt(fabs(d))/(2*a);
printf("Root1=%f+i%f\n",realp,imagp);
printf("Root2=%f-i%f\t",realp,imagp);
}
}
}