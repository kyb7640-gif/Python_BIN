#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    if(*(int *)a < *(int *)b){
        return -1;
    }
    
    return 1;
}

int main(void){
    int N,M,i,M_num;
    int is_there = 0;
    int N_num[100000] = {0};
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        scanf("%d",&N_num[i]);
    }
    
    qsort(N_num,N,sizeof(int),compare);
    
    scanf("%d",&M);
    
    for(i=0;i<M;i++){
        scanf("%d",&M_num);
        int low = 0;
        int high = N-1;
        is_there = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(M_num == N_num[mid]){
                is_there = 1;
                break;
            }
            else if(M_num>N_num[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        printf("%d\n",is_there);
    }
    
    return 0;
}