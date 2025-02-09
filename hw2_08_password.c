#include <stdio.h>
#define PASSWORD 123456

/*
出現”請輸入密碼”的提示，使用者有最多三次輸入的機會。
若輸入正確，則印出”密碼輸入正確，歡迎使用本系統！”。
若輸入不正確，再次出現”請輸入密碼”的提示。
若三次輸入不正確，則印出”密碼輸入超過三次！”，並結束程式的執行。
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
 
