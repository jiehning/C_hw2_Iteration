#include <stdio.h>
#define LENTH 3000 

/*�D�� 
�Y���@��÷�l��3000���ءA�C�Ѱťh�@�b�����סA�ݦh�֤�÷�l�����׷|�u��5���ءC(10��)
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
