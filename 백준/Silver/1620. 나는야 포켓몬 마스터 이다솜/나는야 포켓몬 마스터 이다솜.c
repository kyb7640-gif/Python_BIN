#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char name[21];
    int id;
} Pokemon;

int compare(const void *a, const void *b) {
    return strcmp(((Pokemon *)a)->name, ((Pokemon *)b)->name);
}

int main(void){
    int N,M,i;
    char sol[21];
    int num;
    scanf("%d%d",&N,&M);
    
    Pokemon poket[N];
    
    char str[N][21];
    
    for(i=0;i<N;i++){
        scanf("%s",&str[i]);
        strcpy(poket[i].name, str[i]);
        poket[i].id = i+1;
    }
    
    qsort(poket,N,sizeof(Pokemon),compare);
    
    for(i=0;i<M;i++){
        scanf("%s",sol);
        int low=0;
        int high=N-1;
        
        if(sol[0]>=48&&sol[0]<=57){
            num = atoi(sol);
            printf("%s\n",str[num-1]);
        }
        else{
            while(low<=high){
                int mid = (low+high)/2;
                if(strcmp(poket[mid].name,sol)==0){
                    printf("%d\n",poket[mid].id);
                    break;
                }
                if(strcmp(poket[mid].name,sol)<0) low=mid+1;
                if(strcmp(poket[mid].name,sol)>0) high=mid-1;
            }
        }
    }
    
    return 0;
}