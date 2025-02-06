#include <stdio.h>
#define PASSWORD 123456

void main (){
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
	
}
 
