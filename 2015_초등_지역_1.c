#include <stdio.h>

int main(void){
	freopen("2015_�ʵ�_����_1.txt","r",stdin);
	
	int n, i, temp, cnt=0;
	scanf("%d",&n);
	printf("���� �ڸ� : %d\n\n", n); 
	
	for(i=0;i<5;i++){
		scanf("%d", &temp);
		if(n==temp)
			cnt++;
	}
	
	printf("������ �� : %d", cnt); 
	return 0;
}
