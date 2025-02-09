#include <stdio.h>
#define NUM 50 

/*題目 
利用for迴圈計算1^2-2^2+3^2-4^2+…+49^2-50^2的值。(-1275) 
*/

int main(){
	int result = 0;
	
	for (int i = 1; i <= NUM; i+=2){
		result += (i * i - (i + 1) * (i + 1));
	}

	printf("result = %d",result);
	
	return 0;
}
