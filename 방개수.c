#include <stdio.h>

int main(void){
	int a[]={0, 10, 50, 15, 190, 50, 300, 3000, 55, 99, 77, 100};
	int i, k=20;
	int sum=0;
	
	//배열 개수
	int len=sizeof(a)/sizeof(a[0]);
	 
	//방개수 
	for(i=1;i<=len;i++)
		sum=sum+(a[i]+k-1)/k;
		
	printf("%d ",sum);
	return 0;
}
