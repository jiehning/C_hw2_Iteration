#include <stdio.h>

/*�D�� 
��J�@����ơA�D��Ҧ����]�ơC
�����G36���]�Ƭ�1, 2, 3, 4, 6, 9, 12, 18, 36�C
*/

int main(){
	unsigned int n;

	printf("Please enter a positive interger:");
	scanf("%d", &n);
	
	printf("The factor of %d is:", n);
	for (int i = 1; i <= n; i++){
		if (n%i == 0){
			printf("%d ",i);
		}		
	}
	return 0;	
}
