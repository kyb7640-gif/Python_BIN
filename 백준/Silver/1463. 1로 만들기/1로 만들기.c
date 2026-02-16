#include <stdio.h>

#define MIN(a,b) ((a) < (b) ? (a) : (b))

int min_cnt[1000001] = {0};

int main(void){
    int N,i;
    scanf("%d",&N);
    
    min_cnt[1] = 0;
    
    for(i=2;i<=N;i++){
        min_cnt[i] = min_cnt[i-1]+1;
        if(i%2==0){
            min_cnt[i] = MIN(min_cnt[i],min_cnt[i/2]+1);
        }
        if(i%3==0){
            min_cnt[i] = MIN(min_cnt[i],min_cnt[i/3]+1);
        }
    }
    
    printf("%d",min_cnt[N]);
    
    return 0;
}