/* Program to evaluate Ohms law*/

#include<stdio.h>
int main() 
{ 
 float I, V, R;  
 float Value_of_Current; 
 float Value_of_Voltage; 
 float Value_of_Resistance; 
 int option; 
  
printf("Which Parameter to Calculate\n1->Current\n\
2->Voltage\n\
3->Resistance\n"); 
scanf("%d", &option); 
     
  if (option==1) 
  { 
  printf("Enter the value of Voltage\n");   scanf("%f", &V); 
  printf("Enter the value of Resitance\n");   scanf("%f",&R); 
   
  Value_of_Current=(V/R); 
   
  printf("Value_of_Current\n%f A", Value_of_Current); 
  } 
  else if (option==2) 
  { 
  printf("Enter the value of Current\n");   scanf("%f",&I); 
  printf("Enter the value of Resistance\n");   scanf("%f",&R); 
   
  Value_of_Voltage=(I*R); 
   
  printf("Value of Voltage\n%f V",Value_of_Voltage); 
} 
  else if (option==3) 
  { 
   printf("Enter the value of Voltage\n");    scanf("%f",&V); 
   printf("Enter the value of Current\n");    scanf("%f",&I); 
    
   Value_of_Resistance=V/I; 
    
  printf("Value of Resistance\n%f Ohm",Value_of_Resistance); 
  } 
 return 0; 
  
} 
