#include <stdio.h>

int main(void){
    int a[10]={1,8,4,2,9,4,5,10,70,90};
    int i, sum=0;
    for(i=0;i<10;i++)
        sum=sum+a[i];
        
    printf("%d",sum); 
    
    return 0;
}
