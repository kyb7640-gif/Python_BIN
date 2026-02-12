#include <stdio.h>

int main(void){
    int N,K,i;
    int value_num;
    int cnt = 0;
    int value[10] = {0};
    
    scanf("%d %d",&N,&K);
    
    for(i=0;i<N;i++){
        scanf("%d",&value[i]);
    }
    
    value_num=N-1;
    
    while(!0){
        if(K<value[value_num]){
            value_num--;
        }
        else{
            cnt+=(K/value[value_num]);
            K=K%value[value_num];
        }
        if(K==0){
            break;
        }
    }
    printf("%d",cnt);
}