#include <stdio.h>
#include <stdint.h>
//#include "Custom_Delay.h"	//Not included here, Just a field representation

uint8_t Tsec = 0, Tmin = 0, Thr = 0, a=1;
char D;

void Timer_ISR(void);  //Timer_ISR function declaration
void Delay(void);	   //Rough Delay

// Timer_ISR function definition

void Timer_ISR(void)
{
	// Let us take Timer ISR initiate for every 1 Seconds
	if(Tsec<59)
	{
		Tsec+=1; 
		// to print output every second 
		printf("\r%d:%d:%d", Thr, Tmin, Tsec);
	}
	else 
	{
		Tsec = 0;
		if(Tmin<59)
		{
			Tmin+=1;
			//printf("\r%d:%d:%d", Thr, Tmin, Tsec); //To print output at every second
		}
		else
		{
			Tmin = 0;
			//printf("\r%d:%d:%d",Thr, Tmin, Tsec); //to print output at every minute
			if(Thr<23)
			{
				Thr+=1;
			}
			else
			{
				Thr=0;
			}
		}
	}
}

int main(int argc, char** argv)
{
	while(a)
	{
		Timer_ISR(); // Call of Timer_ISR
		Delay();
		// Added this Conditional loop to stop system being executed for ever
		if(Thr==24)
		{
			printf("Do you want to continue: (Y/N)\n");
			scanf("%c",&D);
			if(D=='N')
			{
				a = 0;
				Thr = 0;
			}
		}
	}
	printf("Loop Exited\n");
	return 0;
}


void Delay(void)
{
    for(long i=0;i<90000000;i++);
}
