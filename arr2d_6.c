//�л� 4��
//90 50 30
//80 59 88
//99 99 99
//60 30 21
 
#include <stdio.h>

int main(void){
	int a[4][3]={{90,50,30},
				 {80,59,88},
				 {99,99,99},
				 {60,30,21}
				};
	
	int i,j,k, sum=0, index=0;
	float avg, max;
	
	for(i=0;i<4;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum=sum+a[i][j];
		}
		avg=(float)sum/3.;
		printf("%d�� �л� : %.2f\n",i+1,avg);
		
		if(max<avg){
			max=avg;
			index=i;
		}
	} 
	
	printf("\n%d�� �л��� 1��(%.2f)", index, max);
	return 0;
}

