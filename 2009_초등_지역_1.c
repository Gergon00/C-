#include <stdio.h>

int main(void){
	freopen("2009_초등_지역_1.txt","r",stdin);
	
	int i, j, temp, cnt;
	for(i=0;i<3;i++){
		cnt=0;
		for(j=0;j<4;j++){
			scanf("%d",&temp);
			if(temp==0)
				cnt++;
		}
		switch(cnt){
			case 1:		printf("A\n");	break;
			case 2:		printf("B\n");	break;
			case 3:		printf("C\n");	break;
			case 4:		printf("D\n");	break;
			default:	printf("E\n");	break;
		}
	}
	
	return 0;
}
