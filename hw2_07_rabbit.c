#include <stdio.h>

/*�D�� 
�Ѥ��i�F�@�s�ߤl�A�Y�T���T���@�ơA�Ѿl�@���F
�Y���������@�ơA�Ѿl�T���F�Y�C���C���@�ơA�Ѿl�G���C�հݨߤl�̤֦��X���C(58��)
*/

int main(){
	
	int n;
	while(1){
		if ((n-1) % 3 == 0 && (n-3) % 5 == 0 && (n-2) % 7 == 0){
			break;
		}
		n++;
	}
	printf("n = %d",n);	
	return 0;
}
