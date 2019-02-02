#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n, s[1000000];

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
	if(start<end){
		int p=start, l=start+1, r=end;
		while(l<=r){
			while(l<=end && s[l]<=s[p])	l++;
			while(r>=start+1 && s[r]>=s[p])	r--;
			if(l<r)	swap(l,r);
		}
		swap(p,r);
		
		quick(start, r-1);
		quick(r+1, end);
		
	}
}

int main(void){
	int i;
	
	printf("n= ");
	scanf("%d" , &n);
	srand(time(0));
	
	for(i=0;i<n;i++)
		s[i]=rand();
		
	//printArray();		
	
	int start=clock();
	quick(0, n-1);
	int end=clock();
	
	//printArray();
	printf("Quick Á¤·Ä = %fÃÊ", (double)(end-start)/CLOCKS_PER_SEC);
	 
	return 0;
}
