#include <stdio.h>
#include <math.h>
#define PRINCIPAL 100000 
#define RATE_S 0.1
#define RATE_C 0.05 

/*題目
錢精打以10%單利投資100000元，郝細算則以5%複利投資100000元。
計算多少年後郝細算的投資可以超過錢精打，並將此時兩人錢數印出。(27年後)
提示：單利公式：P(1+r*n) 複利公式：P(1+r)n
P：本金，r：利率，n：多少年 
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



