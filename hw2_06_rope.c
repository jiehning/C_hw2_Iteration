#include <stdio.h>

void main(){
	int n = 0, rope = 3000;
	
	while(rope > 5){
		rope /= 2;
		n += 1;
	}
	printf("n = %d",n+1);	
}
