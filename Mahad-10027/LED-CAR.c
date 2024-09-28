#include <reg51.h>

void delay(unsigned int time)
{
    unsigned int i;
    unsigned int j;
    for(i=0; i<time; i++)
    {
        for(j=0; j<100; j++);
    }
}

sbit RF=P1^0;
sbit RB=P1^1;
sbit LF=P1^2;
sbit LB=P1^3;
sbit Double=P1^7;

void main()
{
	while(1)
	{
		while(Double==1)
		{
		  RF = 1;
			RB = 1;
			LF = 1;
			LB = 1;
			
			delay(1000);
			RF = 0;
			RB = 0;
			LF = 0;
			LB = 0;
			delay(1000);
			
		}
  } 
}
