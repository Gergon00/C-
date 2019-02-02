#include <stdio.h>

int main(void){
	int i, dan;
	
	for(dan=2;dan<=9;dan++){
		for(i=1;i<=9;i++){
			printf("%d*%d=%d\n",dan,i,dan*i);
		}
	}
	
	return 0;
}
