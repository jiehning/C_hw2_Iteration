#include <stdio.h>

void main(){
	int result = 0, num = 50;
	
	for (int i = 1; i <= num; i+=2){
		result += (i * i - (i + 1) * (i + 1));
	}

	printf("result = %d",result);
}
