#include <stdio.h>
int main(int argv, char** argc)
{
	int * x;
	char *y;
	printf("int ptr size %zu\n", sizeof(x));
	printf("char ptr size %zu", sizeof(y));
	return 0;
}


/*  The size of pointer doesn't depends on the data type it points to it,
 rather it is depended on the machine being executed and it is constant for all the data types, 
 Like for 32 bit executables, the size for both char and int will be 32 bit itself, 
 similarly for 64 bit exe , it'll be 8 Byte - 64 bit */