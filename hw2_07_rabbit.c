#include <stdio.h>

/*題目 
老王養了一群兔子，若三隻三隻一數，剩餘一隻；
若五隻五隻一數，剩餘三隻；若七隻七隻一數，剩餘二隻。試問兔子最少有幾隻。(58隻)
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
