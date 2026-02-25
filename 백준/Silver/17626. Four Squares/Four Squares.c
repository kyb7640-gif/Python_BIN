#include <stdio.h>
#include <math.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void){
    int sort_cnt[50001]={0};
    int i,n,j;
    
    for(i=1;i<=50000;i++){
        sort_cnt[i] = sort_cnt[i-1] + 1;
        for(j=1; j*j<=i; j++){
            sort_cnt[i] = MIN(sort_cnt[i], sort_cnt[i-j*j]+1);
        }
    }
    
    scanf("%d",&n);
    
    printf("%d",sort_cnt[n]);
    
    return 0;
}