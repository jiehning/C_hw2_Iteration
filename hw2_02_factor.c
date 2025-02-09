#include <stdio.h>

/*題目 
輸入一正整數，求其所有的因數。
說明：36的因數為1, 2, 3, 4, 6, 9, 12, 18, 36。
*/

int main(){
	unsigned int n;

	printf("Please enter a positive interger:");
	scanf("%d", &n);
	
	printf("The factor of %d is:", n);
	for (int i = 1; i <= n; i++){
		if (n%i == 0){
			printf("%d ",i);
		}		
	}
	return 0;	
}
