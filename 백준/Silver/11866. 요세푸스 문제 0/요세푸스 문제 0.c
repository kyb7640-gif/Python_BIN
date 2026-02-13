#include <stdio.h>

int main(void){
    int N,K,i;
    int cnt = 0;
    int j=-1;
    int l=0;
    
    scanf("%d %d",&N,&K);
    
    int num[N];
    int pt[N];
    
    for(i=0;i<N;i++){
        num[i] = i+1;
    }
    
    while(l<N){
        ++j;
        if(j>=N) j=0;
        if(num[j]!=0){
            ++cnt;
            if(cnt==K){
                pt[l] = j+1;
                num[j] = 0;
                ++l;
                cnt = 0;
            }
        }
    }
    
    printf("<");
    for(i=0;i<N-1;i++){
        printf("%d, ",pt[i]);
    }
    printf("%d>",pt[N-1]);
    
    return 0;
}