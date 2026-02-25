#include <stdio.h>

int main(void){
    int n,i;
    int answer[1001] = {0};
    
    answer[1] = 1;
    answer[2] = 3;
    
    for(i=3; i<=1000; i++){
        answer[i] = answer[i-1] + 2*answer[i-2];
        answer[i]%=10007;
    }
    
    scanf("%d", &n);
    
    printf("%d",answer[n]);
    
    return 0;
}