#include <stdio.h>
#include <string.h>

int main(void){
    freopen("2013_�ʵ�_����_1.txt","r",stdin);
    char str[100];
    scanf("%s",str);
    //printf("%s\n",str);    
    int i,len;
    len=strlen(str);    //���ڿ����� 
    printf("len=%d\n", len);
    
    
    int sum=10;  //ù��° �׸� ���� 
    for(i=1;i<len;i++){
        if(str[i]==str[i-1])
            sum=sum+5;
        else
            sum=sum+10;
    }
    printf("��ü ����=%d", sum); 
    return 0;
}
