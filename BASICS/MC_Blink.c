//#include "Custom_Delay.h" 
int main()
{
	while(1)
	{
		printf("ON \r");
		Delay();
		printf("OFF\r");
		Delay();
	}
	return 0;
}

void Delay(void)
{
	for(long long int I=0;I<1000000000;I++);  // It is a rough "for loop" to generate a delay
}

