#include <stdio.h>



int main(void){
    freopen("2011_초등_지역_1.txt","r",stdin);
    
    int i,out,in,remain=0;
    int max=0;
    for(i=1;i<=4;i++){
        scanf("%d %d", &out, &in);
        //printf("%d %d\n",out, in);
        remain=remain+(in-out);
        if(max<remain)
            max=remain;
    }    
    printf("%d",max);
    return 0;
}
