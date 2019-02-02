// Quick정렬.c 

#include <stdio.h>
#include <time.h>

int n=15, s[15]={31,8,1,8,4,9,21,42,85,21,5,96,22,31,11};

void printArray(void){
	int i;
	for(i=0;i<n;i++)
		printf("%d ", s[i]);
	printf("\n");
}

void swap(int x, int y){
	int temp=s[x];
	s[x]=s[y];
	s[y]=temp;
}

void quick(int start, int end){
	
}


int main(void){
	printArray();
	
	int start=clock();
	quick(0, n-1);
	int end=clock();
	
	printArray();
	printf("Quick 정렬= %f초", (double)(end-start)/CLOCKS_PER_SEC); 
	
	return 0;
}
