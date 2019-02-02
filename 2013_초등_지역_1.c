#include <stdio.h>
#include <string.h>

int main(void){
    freopen("2013_초등_지역_1.txt","r",stdin);
    char str[100];
    scanf("%s",str);
    //printf("%s\n",str);    
    int i,len;
    len=strlen(str);    //문자열길이 
    printf("len=%d\n", len);
    
    
    int sum=10;  //첫번째 그릇 높이 
    for(i=1;i<len;i++){
        if(str[i]==str[i-1])
            sum=sum+5;
        else
            sum=sum+10;
    }
    printf("전체 높이=%d", sum); 
    return 0;
}
