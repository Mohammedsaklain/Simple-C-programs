#include <stdio.h>
int main(int argv, char** argc) 
{
	puts("Hello, World!");
	return 0;
}



/*int argc, char** argv are parameters added to the main function to allow the 
program to receive input from the command line.
argv: This variable stores the number of command-line arguments passed to the program. 
For example, if you run your program like this: 
myprogram hello world, argv would be 3 (the program name, "hello," and "world").
argc: This is an array of strings (character arrays) that holds the actual command-line arguments. 
In the previous example, argc[0] would be "myprogram," argc[1] would be "hello," and argc[2] would be "world."*/


/* To run this program use, cc -std=c99 -Wall Hello_World.c -o Hello_World*/
/* ./ Hello_World */
/* cc   --> GCC Compiler
-std=c99--> Which standard of C is being used to compile
-Wall   --> Return any errors in the code
Hello_World.c --> Source file to compile
-o Hello_World --> output the .exe file to this*/ 