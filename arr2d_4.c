#include <stdio.h>

int main(void){
	int a[5][2]={	{1,2},{3,4},{5,6},{1,2},{3,3}	};
	
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

