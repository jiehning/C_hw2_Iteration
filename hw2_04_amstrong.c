#include <stdio.h>
#include <math.h>

/*
Amstrong�ƬO���@�ӤT��ƪ���ơA��U��Ƥ��ߤ�M����Ӽƥ����C
��X�Ҧ���Amstrong�ơC(153, 370, 371, 407)
�����G153=1^3+5^3+3^3�A�G153��Amstrong��
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
