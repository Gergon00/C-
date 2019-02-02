#include <stdio.h>

int main(void){
	freopen("2015_초등_지역_1.txt","r",stdin);
	
	int n, i, temp, cnt=0;
	scanf("%d",&n);
	printf("일의 자리 : %d\n\n", n); 
	
	for(i=0;i<5;i++){
		scanf("%d", &temp);
		if(n==temp)
			cnt++;
	}
	
	printf("차량의 수 : %d", cnt); 
	return 0;
}
