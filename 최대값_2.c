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
		
	printf("�ִ� : %d / �ּ� : %d\n", max, min); 
	//�ִ� �ּ� ���
	printf("��� : %f", (float)sum/100); 
	//��� ��� 
	return 0;
}
