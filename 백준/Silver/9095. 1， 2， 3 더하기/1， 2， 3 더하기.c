#include <stdio.h>

int main(void){
    int T,n,i;
    int cnt_num[10];
    
    cnt_num[1] = 1;
    cnt_num[2] = 2;
    cnt_num[3] = 4;
    
    for(i=4;i<=10;i++){
        cnt_num[i] = cnt_num[i-3]+cnt_num[i-2]+cnt_num[i-1];
    }
    
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&n);
        printf("%d\n",cnt_num[n]);
    }
    
    return 0;
}