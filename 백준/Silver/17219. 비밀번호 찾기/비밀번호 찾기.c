#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char site[21];
    char password[21];
    int id;
} User;

int compare(const void *a, const void *b){
    return strcmp(((User *)a)->site, ((User *)b)->site);
}

User user[100001];
char str[100001][21];
    
int main(void){
    int N,M,i;
    int cnt = 0;
    
    scanf("%d %d",&N,&M);
    
    for(i=0;i<N;i++){
        scanf("%s %s",user[i].site, user[i].password);
        user[i].id = i+1;
    }
    
    for(i=0;i<M;i++){
        scanf("%s",str[i]);
    }
    
    qsort(user,N,sizeof(User),compare);
    
    while(!0){
        int low = 0;
        int high = N-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(strcmp(user[mid].site, str[cnt])==0){
                cnt++;
                printf("%s\n",user[mid].password);
                break;
            }
            else if(strcmp(user[mid].site, str[cnt])>0){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(cnt==M){
            break;
        }
    }
    
    return 0;
}

