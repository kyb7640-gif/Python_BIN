#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void){
    int stair_num[300] = {0};
    int pre_max[300] = {0};
    int N,i;
    
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d",&stair_num[i]);
    }
    
    pre_max[0] = stair_num[0];
    pre_max[1] = stair_num[0]+stair_num[1];
    pre_max[2] = MAX(stair_num[0]+stair_num[2], stair_num[1]+stair_num[2]);
    
    
    for(i=3;i<N;i++){
        pre_max[i] = MAX(pre_max[i-3]+stair_num[i-1]+stair_num[i], pre_max[i-2]+stair_num[i]);
    }
    
    printf("%d",pre_max[N-1]);
    
    return 0;
}