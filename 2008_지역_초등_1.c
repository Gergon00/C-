#include <stdio.h>

int main(void){
	freopen("2008_����_�ʵ�_1.txt","r",stdin);
	
	int N, K, i;
	int cnt=0;
	
	scanf("%d %d",&N,&K);
	//��� 
	for(i=1;i<=N;i++){
		if(N%i==0){
			cnt++;
			if(cnt==K)
				printf("%d ", i);
		}
	}
	return 0;
}

