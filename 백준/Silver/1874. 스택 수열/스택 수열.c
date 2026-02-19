#include <stdio.h>

int stack[100001];
int target[100001];
char result[200002];
int top = -1;

int main(void){
    int N,i;
    
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d",&target[i]);
    }
    
    int current_num = 1;
    int target_idx = 0;
    int res_idx = 0;
    
    while(target_idx < N){
        if(current_num <= target[target_idx]){
            stack[++top] = current_num++;
            result[res_idx++] = '+';
        }
        else if(stack[top]==target[target_idx]){
            top--;
            target_idx++;
            result[res_idx++] = '-';
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    
    for(i=0;i<res_idx;i++){
        printf("%c\n", result[i]);
    }
    
    return 0;
}