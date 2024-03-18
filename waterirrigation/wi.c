#include<reg51.h>
sbit relay=P2^0;
sbit sensor=P3^5;
void main(void)
{
relay =0;
sensor=1;
	
while(1)
 { 
  if(sensor==1)
 
  relay=1;
  else
   relay=0;
   
 }
}