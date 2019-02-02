#include <stdio.h>

int main(void){
	int a[10];
	int i;
	
	for(i=0;i<10;i++){
		a[i]=(i+1)*2;
		printf("%d ", a[i]);
	}
	
	//배열의 합
	
	int sum=0;
	printf("\n");
	for(i=0;i<10;i++){
		sum=sum+a[i];
	} 
	printf("합 : %d ", sum);
		
	//배열의 최대값
	
	int max=-987654321;
	printf("\n");
	for(i=0;i<10;i++){
		if(max<a[i])
			max=a[i];
	} 
	printf("최대 : %d ", max);
	
	//배열의 최솟값 
	
	int min=987654321;
	printf("\n");
	for(i=0;i<10;i++){
		if(min>a[i])
			min=a[i];
	} 
	printf("최소 : %d ", min);
	
	//배열의 13보다 큰것의 개수
	
	int cnt=0;
	printf("\n");
	for(i=0;i<10;i++){
		if(a[i]>13)
			cnt++;
	} 
	printf("개수 : %d ",cnt);
	
	return 0;
}

