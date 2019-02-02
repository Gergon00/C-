#include <stdio.h>

int main(void){
	int h, m, d;
	int res1, h1;
	
	scanf("%d	%d", &h, &m);
	scanf("%d", &d);
	
	res1=d/60;
	h1=h/24;
	
	if(res1<1)	m=m+d;
				if(m>=60){
					m=m-60;
					h=h+1;
				}
	if(res1==1)	h=h+1;
				if(h=24)	h=0;
	if(res1>1)	h=h+1;	m=m+(d-60*res1);
							if(m>60){
								m=m-60;
								h=h+res1;
							}

	
	printf("%d %d", h, m);
	return 0;
}
