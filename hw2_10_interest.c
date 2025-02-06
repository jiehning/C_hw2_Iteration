#include <stdio.h>
#include <math.h>
#define PRINCIPAL 100000 
#define RATE_S 0.1
#define RATE_C 0.05 


void main(){
	
	int n = 1;
	double simple, compound;
	
	while(1){
		simple = PRINCIPAL * (1 + RATE_S * n);
		compound = PRINCIPAL * pow ((1 + RATE_C), n);
		if (compound > simple){
			printf("n = %d", n);
			break;
		}
		n++;
	}
		
}



