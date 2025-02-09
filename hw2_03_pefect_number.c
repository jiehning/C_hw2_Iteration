#include <stdio.h>
#define NUM 100

/*肈ヘ 
计璝单埃セōㄤ┮Τ计羆㎝玥计perfect number
т100ず┮ΤЧ计(6, 28)
弧6计1, 2, 3, 6埃ㄤセōㄤ緇计1+2+3 = 6珿6Ч计
*/


int main(){

	printf("The perfect between 0 and %d:\n\n", NUM);
	
	for (int i = 1; i <= NUM; i++){
		int sum = 0;
		for (int j = 1; j < i; j++){
			int mod;
			mod = i % j;
			if (mod == 0){
				sum += j;
			}
		}
		if (sum == i){
		printf("%d ", i);
	}	
	}

	return 0;	
}
