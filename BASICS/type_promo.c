// Program To demonstrate resultant type promotion int + double = double
#include <stdio.h>
int main()
{
	int a = 0,c;
	double d = 10.21;
    printf("int = %d, double = %d\n",sizeof(int),sizeof(double));
	printf("%lu", sizeof(a + d));
	return 0;
}
