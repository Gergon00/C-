#include <stdio.h>

int f(int x){
    if(x%3==0)
        return 0;
    else{
    	int temp;
    	while(x){
    		temp=x%10;
    		if(temp==3 || temp==6 || temp%9)
    			return 0;
    		x=x/10;
    	}
    	return 1;
    }
}

int main(void){
    int i,n;    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(f(i)==1)
            printf("%2d ", i);
        else
            printf("X ");
			
		if(i%10==0)
			printf("\n");   
    }
        
    return 0;
}
