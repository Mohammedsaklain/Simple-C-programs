/* Program to evaluate staircase type*/

#include<stdio.h> 
void main() 
{ 
 int fh,rh,N,tread; 
 printf("Enter the floor height in meter "); 
scanf("%d",&fh); 
 printf("Enter the rise height in meter "); 
 scanf("%d",&rh);  N=fh/rh;  tread=N-1; 
 if(tread<24) 
  { 
    printf("Provide two flight and design as dog legged staircase"); 
  } 
 else 
  { 
   printf("provide three flight and design as open well staircase");  
  } 
}  
