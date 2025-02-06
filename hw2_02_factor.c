#include <stdio.h>

void main(){
	unsigned int n;

	printf("Please enter a positive interger:");
	scanf("%d", &n);
	
	printf("The factor of %d is:", n);
	for (int i = 1; i <= n; i++){
		if (n%i == 0){
			printf("%d ",i);
		}		
	}
	
}
