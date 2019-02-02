#include <stdio.h>

int a[7][2];
int main(void){
	freopen("2016_초등_전국_1.txt","r",stdin); 
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int i, j;
	int year, gen, temp;
	for(i=0;i<n;i++){
		scanf("%d %d", &gen, &year);
		a[year][gen]++;
	}
	
	int sum=0;
	for(i=1;i<=6;i++){
		for(j=0;j<=1;j++){
		temp=(a[i][j]+k-1)/k;
		sum=sum+temp;
		}		
	}
	printf("%d",sum);
	return 0;
}
