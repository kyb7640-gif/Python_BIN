#include <stdio.h>

int main(void){
    int i,n;
    int num=0;
    int answer[1001] = {0};
    
    answer[1] = 1;
    answer[2] = 2;
    
    scanf("%d", &n);
    
    for(i=3;i<=1000;i++){
        answer[i] = answer[i-2]+answer[i-1];
        answer[i]%=10007;
    }
    
    printf("%d", answer[n]);
    
    return 0;
}