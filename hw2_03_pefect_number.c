#include <stdio.h>
#define NUM 100

/*�D�� 
�@�ӼƦr�Y���󰣥h�����H�~�A��Ҧ��]�ƪ��`�M�A�h���Ƭ�perfect number�C
��X100�H���Ҧ��������ơC(6, 28)
�����G6���]�Ƭ�1, 2, 3, 6�A���h�䥻���A��l�]�Ƭۥ[�A1+2+3 = 6�A�G6��������
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
