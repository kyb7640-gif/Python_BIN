#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b){
    char *str1 = (char *)a;
    char *str2 = (char *)b;
    
    return(strcmp(str1,str2));
}

int main(void){
    int N,M,i;
    int cnt=0;
    int j=0;
    
    scanf("%d %d",&N,&M);
    
    char hear[N][21];
    char see[M][21];
    char hs[M][21];
    
    for(i=0;i<N;i++){
        scanf("%s",&hear[i]);
    }
    for(i=0;i<M;i++){
        scanf("%s",&see[i]);
    }
    
    qsort(hear,N,sizeof(hear[0]),compare);
    qsort(see,M,sizeof(see[0]),compare);
    
    for(i=0;i<N;i++){
        int low=0;
        int high=M-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(strcmp(hear[i],see[mid])==0){
                cnt++;
                strcpy(hs[j],see[mid]);
                j++;
                break;
            }
            else if(strcmp(hear[i],see[mid])>0){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++){
        printf("%s\n",hs[i]);
    }
    
    return 0;
}