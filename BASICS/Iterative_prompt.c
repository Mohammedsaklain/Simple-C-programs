#include <stdio.h>
static char input[256];

int main(int argv, char** argc)
{
    puts("First rev");
    puts("rev 0.0.0.0.1");

    while(1)
    {
		//fputs doesn't append a newline character and require some file to write to "stdout"
		fputs("MSD>", stdout);	
		//fgets also require some file to read from		
		fgets(input, 256, stdin);		
		printf("Your answer: %s", input);
		puts("Enter CTRL + C to exit");
    }
    return 0;
}
	
	