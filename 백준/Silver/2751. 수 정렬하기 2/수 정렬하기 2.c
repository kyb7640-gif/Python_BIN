#include <stdio.h>

int main(void){
    int num[2000001] = {0};
    int N,i,j;
    int n;
    num[1000000] = 1;
    
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d",&n);
        j = n+1000000;
        num[j] = n;
    }
    
    for(i=0;i<1000000;i++){
        if(num[i]!=0) printf("%d\n",num[i]);
    }
    if(num[1000000]==0) printf("%d\n",num[1000000]);
    for(i=1000001;i<2000001;i++){
        if(num[i]!=0) printf("%d\n",num[i]);
    }
    
    return 0;
}