#include <stdio.h>

int main(void){
	int a[10];
	int i;
	
	for(i=0;i<10;i++){
		a[i]=(i+1)*2;
		printf("%d ", a[i]);
	}
	
	//�迭�� ��
	
	int sum=0;
	printf("\n");
	for(i=0;i<10;i++){
		sum=sum+a[i];
	} 
	printf("�� : %d ", sum);
		
	//�迭�� �ִ밪
	
	int max=-987654321;
	printf("\n");
	for(i=0;i<10;i++){
		if(max<a[i])
			max=a[i];
	} 
	printf("�ִ� : %d ", max);
	
	//�迭�� �ּڰ� 
	
	int min=987654321;
	printf("\n");
	for(i=0;i<10;i++){
		if(min>a[i])
			min=a[i];
	} 
	printf("�ּ� : %d ", min);
	
	//�迭�� 13���� ū���� ����
	
	int cnt=0;
	printf("\n");
	for(i=0;i<10;i++){
		if(a[i]>13)
			cnt++;
	} 
	printf("���� : %d ",cnt);
	
	return 0;
}

