#include "fcntl.h"

void main(void){
int buzzer;
int c;

buzzer = open("/dev/rtbuzzer0" , O_WRONLY  );

system("stty -echo -icanon min 1 time 0");

while(1){
	c=getchar();
	switch(c){
		case 'o'://off
			write (buzzer,"0",2);			
			break;
		case 'a'://do
			write(buzzer,"261",4);
			break;
		case 'w'://do#
			write(buzzer,"277",4);
			break;
		case 's'://re
			write(buzzer,"293",4);
			break;
		case 'e'://re#
			write(buzzer,"311",4);
			break;
		case 'd'://mi
			write(buzzer,"329",4);
			break;
		case 'f'://fa
			write(buzzer,"349",4);
			break;
		case 't'://fa#
			write(buzzer,"370",4);
			break;
		case 'g'://so
			write(buzzer,"392",4);
			break;
		case 'y'://so#
			write(buzzer,"415",4);
			break;
		case 'h'://ra
			write(buzzer,"440",4);
			break;
		case 'u'://ra#
			write(buzzer,"446",4);	
			break;
		case 'j'://shi
			write(buzzer,"493",4);
			break;
		case 'k'://DO		
			write(buzzer,"523",4);
			break;
	}
}

close(buzzer);
} 
