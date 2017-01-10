#include <stdio.h>

char* itoh(int a);
int zaehler;


int main(){
	while(1){
		
		
		
	}
}

int Messung(void){
	
	itoh(getADC);
	
	
}

int getADC(void){
	zaehler++;
	
	if(zaehler > 1023){
		zaehler = 0;
	}
	
	return zaehler;
	
}



char* itoh(int a){

	int fourbit;
	static char send[100];
	int zsave=a;
	
	for(int i=0; i<3; i++){
		if(i==0){
			fourbit = 0b0000000000000011&(zsave>>8);
		}
		if(i==1){
			fourbit = 0b0000000000001111&(zsave>>4);
		}
		if(i==2){
			fourbit = 0b0000000000001111&(zsave);
		}
	
	switch(fourbit){
		case 0: 
		send[i]='0';
		break;
		
		case 1:
		send[i]='1';
		break;
		
		case 2:
		send[i]='2';
		break;
		
		case 3:
		send[i]='3';
		break;
		
		case 4:
		send[i]='4';
		break;
		
		case 5:
		send[i]='5';
		break;
		
		case 6:
		send[i]='6';
		break;
		
		case 7:
		send[i]='7';
		break;
		
		case 8:
		send[i]='8';
		break;
		
		case 9:
		send[i]='9';
		break;
		
		case 10:
		send[i]='A';
		break;
		
		case 11:
		send[i]='B';
		break;
		
		case 12:
		send[i]='C';
		break;
		
		case 13:
		send[i]='D';
		break;
		
		case 14:
		send[i]='E';
		break;
		
		case 15:
		send[i]='F';
		break;
		
		default:
			printf("Sollte nicht möglich sein das wert über 15 ist.");
			break;
	}
	//printf("%c\n",send[i]);
	//printf("%s\n",(char*)send);
	//printf("%X \n", a[i]);
	}
	
	return send;
}