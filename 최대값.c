#include <stdio.h>

int main(void){
    freopen("�ִ밪.txt","r",stdin);
    int i, temp, max=0, index=0;
    for(i=1;i<=9;i++){
        scanf("%d", &temp);
        //printf("%d ", temp);
        if(max<temp){
            max=temp;
            index=i;
        }
    }
    printf("%d\n%d",max,index);
    
    return 0;   
}
