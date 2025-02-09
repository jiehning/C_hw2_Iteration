#include <stdio.h>
#include <math.h>

/*
Amstrong计琌计俱计ㄤ计ぇミよ㎝单赣计セō
т┮ΤAmstrong计(153, 370, 371, 407)
弧153=1^3+5^3+3^3珿153Amstrong计
*/

int main(){
	int n1, n2, n3, sum;
    printf("The amstrong number: \n");
	for (int i = 100; i < 1000; i++){
		n1 = i/100;
		n2 = (i%100)/10;
		n3 = (i%10);
		sum= n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
		if (sum == i){
			printf("%d\n", i);
		}
	}
	return 0;	
}
