#include <stdio.h>
#define PASSWORD 123456

/*
�X�{���п�J�K�X�������ܡA�ϥΪ̦��̦h�T����J�����|�C
�Y��J���T�A�h�L�X���K�X��J���T�A�w��ϥΥ��t�ΡI���C
�Y��J�����T�A�A���X�{���п�J�K�X�������ܡC
�Y�T����J�����T�A�h�L�X���K�X��J�W�L�T���I���A�õ����{��������C
*/

int main (){
	int n = 1;
	do {
		int keyin;
		printf("Please enter the password:");
		scanf("%d", &keyin);
		if (keyin == PASSWORD){
			printf("Correct! Welcome!");
			break;
			}
		n++;
	} while(n <= 3);
	if (n > 3){
		printf("The attempt has exceeded 3 times!");
	}
	return 0;	
}
 
