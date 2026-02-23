#include <stdio.h>

int num[100001] = {0};
long long sum[100001] = {0};

int main(void){
    int N,M,i,j;
    int num1, num2;
    
    scanf("%d %d", &N, &M);
    
    for(i=1; i<=N; i++){
        scanf("%d", &num[i]);
        sum[i]=sum[i-1]+num[i];
    }
    
    for(i=0;i<M;i++){
        scanf("%d %d", &num1, &num2);
        printf("%lld\n",sum[num2]-sum[num1-1]);
    }
    
    return 0;
}