#include <stdio.h>

int main(void){
    int T,N,M,i,j;
    int cnt = 0;
    int k=0;
    int cnt_9 = 9;
    int num[100]={0};
    
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
        int num_cnt[9] = {0};
        k=0;
        cnt_9=9;
        cnt=0;
        scanf("%d %d",&N,&M);
        for(j=0;j<N;j++){
            scanf("%d",&num[j]);
            num_cnt[num[j]-1]++;
        }
        while(!0){
            if(num_cnt[(cnt_9)-1]==0){
                cnt_9--;
            }
            else{
                if(num[k]==cnt_9){
                    ++cnt;
                    num[k]=0;
                    num_cnt[(cnt_9)-1]--;
                    if(k==M){
                        printf("%d\n",cnt);
                        break;
                    }
                }
                ++k;
            }
            if(k==N) k=0;
        }
    }
    
    return 0;
}