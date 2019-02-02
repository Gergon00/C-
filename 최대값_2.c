#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	srand(time(0));
	int a[100];
	
	int i;
	for(i=0;i<=100;i++){
		a[i]=rand();
	}
	
	int max=a[0], min=a[0], sum=0;
	for(i=1;i<100;i++){
		if(max<a[i])	max=a[i];
		if(min>a[i])	min=a[i];
		sum=sum+a[i];
	}
		
	printf("최대 : %d / 최소 : %d\n", max, min); 
	//최대 최소 출력
	printf("평균 : %f", (float)sum/100); 
	//평균 출력 
	return 0;
}
