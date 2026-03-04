#include <stdio.h>
#include <string.h>

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int M,N;
int field[50][50] = {0};
int visit[50][50] = {0};

void dfs(int x, int y){
    visit[y][x] = 1;
    for (int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if (nx >= 0 && nx < M && ny >= 0 && ny < N){
            if (field[ny][nx] == 1 && visit[ny][nx] != 1){
                dfs(nx, ny);
            }
        }
        
    }
}

int main(void){
    int K,T,i,j,k;
    int num1, num2;
    
    scanf("%d",&T);
    
    for (k=0; k<T; k++){
        memset(field, 0, sizeof(field));
        memset(visit, 0, sizeof(visit));
        
        scanf("%d %d %d", &M,&N,&K);
        
        for (i=0;i<K;i++){
            scanf("%d %d", &num1,&num2);
            field[num2][num1] = 1;
        }
        
        int cnt = 0;
        
        for (i=0;i<N;i++){
            for (j=0;j<M;j++){
                if (field[i][j] == 1 && visit[i][j]!=1) {
                    dfs(j, i);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);        
    }
    
    return 0;
}