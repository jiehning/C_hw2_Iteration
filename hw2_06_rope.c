#include <stdio.h>
#define LENTH 3000 

/*題目 
若有一條繩子長3000公尺，每天剪去一半的長度，需多少天繩子的長度會短於5公尺。(10天)
*/

int main(){
	int n = 0, rope = LENTH;
	
	while(rope > 5){
		rope /= 2;
		n += 1;
	}
	printf("n = %d",n+1);	
	return 0;
}
