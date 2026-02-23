#include <stdio.h>

int main(void){
    int T,N,i;
    long long num[100] = {0};
    
    scanf("%d",&T);
    
    num[0] = 1;
    num[1] = 1;
    num[2] = 1;
    
    for(i=3;i<100;i++){
        num[i] = num[i-2]+num[i-3];
    }
    
    for(i=0;i<T;i++){
        scanf("%d",&N);
        printf("%lld\n",num[N-1]);
    }
    
    return 0;
}