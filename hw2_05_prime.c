#include <stdio.h>

/*題目
輸入一正整數，找出所有小於或等於的質數。 
*/

int main(){
	int n, mod, sum = 0;

	printf("Please enter a interger:");
	scanf("%d", &n);
	
	printf("The prime between 0 to %d is:\n", n);
	for (int i = 2; i <= n; i++){
		for (int j = 1; j <= i; j++){
			mod = i%j;
			if (mod == 0){
				sum += 1; 
			}
		}
		if (sum <= 2){
			printf("%d\n",i);
		}
		sum = 0;
	}
	return 0;	
}
