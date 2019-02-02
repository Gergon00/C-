#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[1000000];

void swap(int x, int y){
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}

int main(void){	
	srand(time(0));	//현재시간 기준으로 
					//random 수열의 seed값을 찾는다. 
	int i, j, n;
	printf("n= ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){a[i]=rand();}
	
	int start=clock();
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(i,j);
			}
		}
	}
	
	int end=clock();
	printf("Selection 정렬 (sec)= %f 초\n", (double)(end-start)/CLOCKS_PER_SEC);
	
	return 0;
}
