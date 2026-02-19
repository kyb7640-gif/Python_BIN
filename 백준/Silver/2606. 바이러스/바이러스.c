#include <stdio.h>

int match[101][101];
int visited[101] = {0};
int N, pair;
int cnt = 0;

void seek(int start){
    visited[start] = 1;
    
    for(int i=1;i<=N;i++){
        if(match[start][i]==1 && visited[i]!=1){
            cnt++;
            seek(i);
        }
    }
}

int main(void){
    int a,b;
    scanf("%d",&N);
    scanf("%d",&pair);
    
    for(int i=0; i<pair; i++){
        scanf("%d %d",&a, &b);
        match[a][b]=1;
        match[b][a]=1;
    }
    
    seek(1);
    
    printf("%d",cnt);
    
    return 0;
}