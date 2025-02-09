#include <stdio.h>
/*題目 
畫出三種排列的星星圖形
*/

int main(){
	
	int n;
	printf("Please enter row numbers:");
	scanf("%d", &n);
	
	//(1)
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("------------\n");
	
	//(2)
	
	for (int i = n; i >= 1; i--){
		for (int j = 1; j <= (n - i) ; j++){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("------------\n");
	
	//(3)
	for (int i = n; i >= 1; i--){
		for (int j = 1; j <= (i - 1); j++){
			printf(" ");
		}
		for (int j = 1; j <= 2 * ((n + 1) - i) - 1; j++){
			printf("*");
		}
		printf("\n");
	} 
	
	return 0;		
}
