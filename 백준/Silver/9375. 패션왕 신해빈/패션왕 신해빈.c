#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char name[21];
    char type[21];
} Cloth;

int compare(const void *a, const void *b){
    return strcmp(((Cloth *)a)->type, ((Cloth *)b)->type);
}

Cloth cloth[35];

int main(void){
    int T,n,i,j;
    
    scanf("%d",&T);
    
    for (j=0;j<T;j++){
        scanf("%d",&n);
        if (n==0){
            printf("0\n");
            continue;
        }
        int type_cnt = 0;
        int cloth_cnt[35] = {0};
        int last_type = 0;
        long long total = 1;
        int t = 0;
        
        for (i=0;i<n;i++){
            scanf("%s %s",cloth[i].name, cloth[i].type);
        }
        qsort(cloth,n,sizeof(Cloth),compare);
        cloth_cnt[type_cnt]++;
        for(i=1;i<n;i++){
            if(strcmp(cloth[last_type].type,cloth[i].type)==0){
                cloth_cnt[type_cnt]++;
            }
            else{
                cloth_cnt[++type_cnt]++;
                last_type = i;
            }
        }
        for(t=0;t<=type_cnt;t++){
            total *= (cloth_cnt[t]+1);
        }
        
        printf("%lld\n", total-1);
    }
    
    return 0;
}