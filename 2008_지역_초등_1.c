#include <stdio.h>

int main(void){
	freopen("2008_지역_초등_1.txt","r",stdin);
	
	int N, K, i;
	int cnt=0;
	
	scanf("%d %d",&N,&K);
	//약수 
	for(i=1;i<=N;i++){
		if(N%i==0){
			cnt++;
			if(cnt==K)
				printf("%d ", i);
		}
	}
	return 0;
}

