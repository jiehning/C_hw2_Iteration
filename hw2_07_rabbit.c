#include <stdio.h>

void main(){
	
	int n;
	while(1){
		if ((n-1) % 3 == 0 && (n-3) % 5 == 0 && (n-2) % 7 == 0){
			break;
		}
		n++;
	}
	printf("n = %d",n);	
}
