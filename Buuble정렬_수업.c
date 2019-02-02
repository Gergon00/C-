// Buuble정렬.c

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h>

int a[1000000];
//int a[5]={5,2,3,1,4}; 

void swap(int x, int y){
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;	
}

int main(void){
	srand(time(0)); // 현재시간을 기준으로 
	                // random 수열의 seed 값을 찾는다. 
	int i,j, n, k;
	printf("n= ");
	scanf("%d", &n);
	//n=5;
	
	for(i=0;i<n;i++){a[i]=rand();} 
	//for(i=0;i<n;i++) printf("%d ", a[i]);  printf("\n");
	
	int start=clock();
	
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1])
				swap(j,j+1);
		}
		//for(k=0;k<n;k++) printf("%d ", a[k]);  printf("\n");
	}
	
	
	int end=clock();
	printf("Bubble 정렬(sec)= %f 초\n",(double)(end-start)/CLOCKS_PER_SEC);  
	

	return 0;
}
	
	
 
