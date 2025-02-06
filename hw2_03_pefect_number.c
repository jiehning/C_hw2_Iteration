
#include <stdio.h>

void main(){

	printf("The perfect between 0 and 100:");
	
	for (int i = 1; i <= 100; i++){
		int sum = 0;
		for (int j = 1; j <= i; j++){
			int mod;
			mod = i % j;
			if (mod == 0){
				sum += j;
			}
		}
		if (sum-i == i){
		printf("\n%d ", i);
	}	
	}

	
}
