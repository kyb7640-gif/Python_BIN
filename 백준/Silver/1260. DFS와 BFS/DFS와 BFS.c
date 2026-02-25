#include <stdio.h>
int graph[1001][1001] = {0};
int q[1001];
int visit[1001] = {0};
int N, M, V;

void dfs(int v){
    visit[v] = 1;
    printf("%d ",v);
    
    for(int i=1;i<=N;i++){
        if(graph[v][i]==1 && visit[i]!=1){
            dfs(i);
        }
    }
}

void bfs(int v){
    visit[v] = 1;
    int head = 0;
    int tail = 0;
    q[tail++] = v;
    
    while(head < tail){
        int pop = q[head++];
        printf("%d ",pop);
        for(int i=1; i<=N; i++){
            if(graph[pop][i]==1 && visit[i]!=1){
                visit[i] = 1;
                q[tail++] = i;
            }
        }
    }
}

int main(void){
    scanf("%d %d %d", &N,&M,&V);
    int i, num1, num2;
    
    for(i=1;i<=M;i++){
        scanf("%d %d", &num1,&num2);
        graph[num1][num2]=1;
        graph[num2][num1]=1;
    }
    
    dfs(V);
    printf("\n");
    
    for(i=1;i<=N;i++){
        visit[i] = 0;
    }
    
    bfs(V);
    
    return 0;
}