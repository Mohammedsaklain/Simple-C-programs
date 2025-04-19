/* 1. Use a for loop to print out Hello World! five times.
#include <stdio.h>
int main(int argv, char** argc)
{
	for(int i=0;i<5;i++){
		puts("Hello, World!");
	}
	return 0;
}
*/
/*Use a while loop to print out Hello World! five times.

#include <stdio.h>
int main(int argv, char**  argc)
{
  int i=0;
	while(i<5){
	puts("Hello, World!");
	i+=1;
	}
	return 0;
}
*/

//Declare a function that outputs Hello World! n number of times. Call this from main

#include <stdio.h>
void NHW(int n);

void NHW(int n){
	while(n>0){
	  puts("Hello, World!");
	  n-=1;
	}
	
  }
int main(int argv, char** argc){
	int n;	
	puts("Enter N value");
	scanf("%d",&n);
	NHW(n);
	return 0;
}
/*puts() : When you want to print a simple string and don't need any formatting or mixing of data types. We don't need \\n character at end it automatically adds it.
printf() : When you need more control over the output format, want to print multiple data types, we require \\n character at end*/