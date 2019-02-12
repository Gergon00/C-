#include <stdio.h>

int main(void){
	freopen("정보_1.txt","r",stdin);
	 
/*	int i, a[9];
	
	for(i=0;i<9;i++){
		scanf("%d", &a[i]);
	}
	
	int max=a[0], index=0;
	
	for(i=1;i<9;i++){
		if(max<a[i]){
			max=a[i];
			index=i;
		}
	}
	printf("최댓값 : %d\n", max);
	printf("%d번째\n", index+1); 
	
	return 0;
}*/

	int i, idx=0, index=0, temp, max=-987654321, min=987654321;
	for(i=0;i<9;i++){
		scanf("%d", &temp);
		if(max<temp){
			max=temp;
			index=i;
		}
		if(min>temp){
			min=temp;
			idx=i;
		}
	}
	
	printf("%d %d\n", index+1, max);
	printf("%d %d\n", idx+1, min);
	return 0;
}
