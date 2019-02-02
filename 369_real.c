#include <stdio.h>

int f(int x){
    if(x%3==0)
        return 1;
        
    while(x>0){
        if(x%10==3  ||x%10==6   ||x%10==9)
            return 1;
        x=x/10;
    }
    return 0;
}

int main(void){
    int i,n,temp;    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        temp=f(i);
        if(temp==1)
            printf("  X ");
        else
            printf("%3d ",i);
        
        if(i%10==0)
            printf("\n");
    
    }
        
    return 0;
}
