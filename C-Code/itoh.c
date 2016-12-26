#include <stdio.h>

main(){
	uint16_t a[8] = {672, 162, 1002, 580, 918, 187, 309, 465};
	uint16_t zsave;
	int count = 0;
	
//	if(count == 0){
//		zsave[0] = a[0]+(0b1111110000000000&(a[1]>>10));
//		zsave[1] = (0b0000000000001111&(a[1]<<6))+(0b0000111111111100&(a[2]>>4))+(0b0000000000000011&(a[3]>>14));
//		zsave
		
//		count++;
//	}
	
	uint8_t=fourbit;
	char send[100];
	zsave=a[2];
	
	for(int i=0; i<2; i++){
		if(i==0){
			fourbit = 0b0000000000001111&zsave;
		}
		if(i==1){
			fourbit = 0b0000000000001111&(zsave>>4);
		}
		if(i==2){
			fourbit = 0b0000000000000011&(zsave>>8);
		}
	
	switch(fourbit){
		case 0: 
		send[i]=0;
		break;
		
		case 1:
		send[i]=1;
		break;
		
		case 2:
		send[i]=2;
		break;
		
		case 3:
		send[i]=3;
		break;
		
		case 4:
		send[i]=4;
		break;
		
		case 5:
		send[i]=5;
		break;
		
		case 6:
		send[i]=6;
		break;
		
		case 7:
		send[i]=7;
		break;
		
		case 8:
		send[i]=8;
		break;
		
		case 9:
		send[i]=9;
		break;
		
		case 10:
		send[i]="A";
		break;
		
		case 11:
		send[i]="B";
		break;
		
		case 12:
		send[i]="C";
		break;
		
		case 13:
		send[i]="D";
		break;
		
		case 14:
		send[i]="E";
		break;
		
		case 15:
		send[i]="F";
		break;
		
		default:
			printf("Sollte nicht möglich sein das wert über 15 ist.")
			break;
	}
	printf(send[i]);
	}
}