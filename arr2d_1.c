#include <stdio.h>

int main(void){
	int a[]={1,2,3,4,5};
	char b[]={'a','a','a','a','a','a','a','a','a','a'};
	
	//배열의 크기(바이트단위) 
	int len,len1;
	len=sizeof(a);
	len1=sizeof(b);
	
	printf("len=%d, len1=%d\n", len, len1);
	
	//배열항목개수 
	int size, size1;
	size=sizeof(a)/sizeof(a[0]);
	size1=sizeof(b)/sizeof(b[0]);
	
	printf("size=%d, size=%d\n",size,size1);
	
	//출력
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	} 
	
	for(i=0;i<size1;i++){
		printf("%c ",b[i]);
	} 
	return 0;
}

