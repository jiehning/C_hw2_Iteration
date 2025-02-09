#include <stdio.h>
#include <math.h>
#define PRINCIPAL 100000 
#define RATE_S 0.1
#define RATE_C 0.05 

/*�D��
���르�H10%��Q���100000���A�q�Ӻ�h�H5%�ƧQ���100000���C
�p��h�֦~��q�Ӻ⪺���i�H�W�L���르�A�ñN���ɨ�H���ƦL�X�C(27�~��)
���ܡG��Q�����GP(1+r*n) �ƧQ�����GP(1+r)n
P�G�����Ar�G�Q�v�An�G�h�֦~ 
*/

int main(){
	
	int n = 1;
	double simple, compound;
	while(1){
		simple = PRINCIPAL * (1 + RATE_S * n);
		compound = PRINCIPAL * pow ((1 + RATE_C), n);
		if (compound > simple){
			printf("n = %d", n);
			break;
		}
		n++;
	}
	
	return 0;		
}



